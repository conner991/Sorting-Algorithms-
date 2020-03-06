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
#ifndef __SELECTSORT_CPP__
#define __SELECTSORT_CPP__
#include "SelectSort.h"

/* -----------------------------------------------------------------------------
FUNCTION:          main()
DESCRIPTION:       
RETURNS:           0
NOTES:             
------------------------------------------------------------------------------- */
template <class DT>
SelectSort<DT>::SelectSort()
{
    swaps = 0;
    comps = 0;
    array = NULL;
}

/* -----------------------------------------------------------------------------
FUNCTION:          main()
DESCRIPTION:       
RETURNS:           0
NOTES:             
------------------------------------------------------------------------------- */
template <class DT>
SelectSort<DT>::~SelectSort()
{

}

/* -----------------------------------------------------------------------------
FUNCTION:          main()
DESCRIPTION:       
RETURNS:           0
NOTES:             
------------------------------------------------------------------------------- */
template <class DT>
void SelectSort<DT>::sSort(DT array[], int count, long int& swaps, long int& comps)
{
    int min, temp;

    for (int i = 0; i < (count - 1); i++)
    {
        min = i;

        for (int j = i + 1; j < count; j++)
        {   
            if (array[j] < array[min])
            {
                min = j;
                comps++;
            }
        }

        temp = array[i];
        array[i] = array[min];
        array[min] = temp;
        swaps++;
    }
}

/* -----------------------------------------------------------------------------
FUNCTION:          main()
DESCRIPTION:       
RETURNS:           0
NOTES:             
------------------------------------------------------------------------------- */
template <class DT>
void SelectSort<DT>::dataOutW(double cpuTime, long int& swaps, long int& comps, int dataSet)
{   
    switch (dataSet)
    {
        case 1: cout << "\n1,000 Integers: Selection Sort, Worst Case\n";
                cout << "CPU Runtime: " << cpuTime << endl;
                cout << "Number of Swaps: " << swaps << endl;
                cout << "Number of Comparisons: " << comps << endl;
                
                break;

        case 2: cout << "\n10,000 Integers: Selection Sort, Worst Case\n";
                cout << "CPU Runtime: " << cpuTime << endl;
                cout << "Number of Swaps: " << swaps << endl;
                cout << "Number of Comparisons: " << comps << endl;
                
                break;

        case 3: cout << "\n100,000 Integers: Selection Sort, Worst Case\n";
                cout << "CPU Runtime: " << cpuTime << endl;
                cout << "Number of Swaps: " << swaps << endl;
                cout << "Number of Comparisons: " << comps << endl;
                
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
void SelectSort<DT>::dataOutB(double cpuTime, long int& swaps, long int& comps, int dataSet)
{   
    switch (dataSet)
    {
        case 1: cout << "\n1,000 Integers: Selection Sort, Best Case\n";
                cout << "CPU Runtime: " << cpuTime << endl;
                cout << "Number of Swaps: " << swaps << endl;
                cout << "Number of Comparisons: " << comps << endl << endl << endl;
                
                break;

        case 2: cout << "\n10,000 Integers: Selection Sort, Best Case\n";
                cout << "CPU Runtime: " << cpuTime << endl;
                cout << "Number of Swaps: " << swaps << endl;
                cout << "Number of Comparisons: " << comps << endl << endl << endl;
                
                break;

        case 3: cout << "\n100,000 Integers: Selection Sort, Best Case\n";
                cout << "CPU Runtime: " << cpuTime << endl;
                cout << "Number of Swaps: " << swaps << endl;
                cout << "Number of Comparisons: " << comps << endl << endl << endl;
                
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
void SelectSort<DT>::printArray(DT array[], int count)
{   
    cout << endl;

    for(int i = 0; i < count; i++)
    {   
        cout << array[i] << " ";
    }

    cout << endl;
}

#endif
