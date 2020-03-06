/* -----------------------------------------------------------------------------
FILE NAME:         
DESCRIPTION:       
USAGE:             
COMPILER:          GNU g++ compiler on Linux
NOTES:             

MODIFICATION HISTORY:
Author             Date               Version
---------------    ----------         --------------
Your Name Here     01-01-2020         1.0  Original version
----------------------------------------------------------------------------- */
#ifndef __INSERTSORT_CPP__
#define __INSERTSORT_CPP__
#include "InsertSort.h"

/* -----------------------------------------------------------------------------
FUNCTION:          main()
DESCRIPTION:       
RETURNS:           0
NOTES:             
------------------------------------------------------------------------------- */
template <class DT> 
InsertSort<DT>::InsertSort()
{
    swaps = 0;
    comps = 0;
}

/* -----------------------------------------------------------------------------
FUNCTION:          main()
DESCRIPTION:       
RETURNS:           0
NOTES:             
------------------------------------------------------------------------------- */
template <class DT>
InsertSort<DT>::~InsertSort()
{

}

/* -----------------------------------------------------------------------------
FUNCTION:          main()
DESCRIPTION:       
RETURNS:           0
NOTES:             
------------------------------------------------------------------------------- */
template <class DT> 
void InsertSort<DT>::iSort(DT array[], int count, long int& swaps, long int& comps)
{
    int key, j;

    for(int i = 1; i < count; i++)
    {
        key = array[i];
        j = i - 1;

        // Move elements of array [0... i - 1] that are greater
        // than key, to one position ahead of their current position
        while(j >= 0 && array[j] > key)     
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        
        array[j + 1] = key;
    }
}

/* -----------------------------------------------------------------------------
FUNCTION:          main()
DESCRIPTION:       
RETURNS:           0
NOTES:             
------------------------------------------------------------------------------- */
template <class DT>
void InsertSort<DT>::dataOutW(double cpuTime1, long int& swaps1, long int& comps1, int dataSet)
{   
    switch (dataSet)
    {
        case 1: cout << "\n1,000 Integers: Insertion Sort, Worst Case\n\n";
                cout << "CPU Runtime: " << cpuTime1 << endl;
                cout << "Number of Swaps: " << swaps1 << endl;
                cout << "Number of Comparisons: " << comps1 << endl;
                
                break;

        case 2: cout << "\n10,000 Integers: Insertion Sort, Worst Case\n\n";
                cout << "CPU Runtime: " << cpuTime1 << endl;
                cout << "Number of Swaps: " << swaps1 << endl;
                cout << "Number of Comparisons: " << comps1 << endl;
                
                break;

        case 3: cout << "\n100,000 Integers: Insertion Sort, Worst Case\n\n";
                cout << "CPU Runtime: " << cpuTime1 << endl;
                cout << "Number of Swaps: " << swaps1 << endl;
                cout << "Number of Comparisons: " << comps1 << endl;
                
                break;

        default: cout << endl;

    }

    
}

/* -----------------------------------------------------------------------------
FUNCTION:          main()
DESCRIPTION:       
RETURNS:           0
NOTES:             
------------------------------------------------------------------------------- */
template <class DT>
void InsertSort<DT>::dataOutB(double cpuTime1, long int& swaps1, long int& comps1, int dataSet)
{   
    switch (dataSet)
    {
        case 1: cout << "\n1,000 Integers: Insertion Sort, Best Case\n\n";
                cout << "CPU Runtime: " << cpuTime1 << endl;
                cout << "Number of Swaps: " << swaps1 << endl;
                cout << "Number of Comparisons: " << comps1 << endl;
                
                break;

        case 2: cout << "\n10,000 Integers: Insertion Sort, Best Case\n\n";
                cout << "CPU Runtime: " << cpuTime1 << endl;
                cout << "Number of Swaps: " << swaps1 << endl;
                cout << "Number of Comparisons: " << comps1 << endl;
                
                break;

        case 3: cout << "\n100,000 Integers: Insertion Sort, Best Case\n\n";
                cout << "CPU Runtime: " << cpuTime1 << endl;
                cout << "Number of Swaps: " << swaps1 << endl;
                cout << "Number of Comparisons: " << comps1 << endl;
                
                break;

        default: cout << endl;

    }

    
}

/* -----------------------------------------------------------------------------
FUNCTION:          main()
DESCRIPTION:       
RETURNS:           0
NOTES:             
------------------------------------------------------------------------------- */
template <class DT>
void InsertSort<DT>::printArray(DT array[], int count)
{
    cout << endl;

    for(int i = 0; i < count; i++)
    {   
        cout << array[i] << " ";
    }

    cout << endl;
}


#endif
