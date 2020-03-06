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
#ifndef __MERGESORT_CPP__
#define __MERGESORT_CPP__
#include "MergeSort.h"

/* -----------------------------------------------------------------------------
FUNCTION:          main()
DESCRIPTION:       
RETURNS:           0
NOTES:             
------------------------------------------------------------------------------- */
template <class DT> 
MergeSort<DT>::MergeSort()
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
MergeSort<DT>::~MergeSort()
{

}

/* -----------------------------------------------------------------------------
FUNCTION:          main()
DESCRIPTION:       
RETURNS:           0
NOTES:             first is for the first index and last is the last index of the 
                   subarray of array to be sorted 
------------------------------------------------------------------------------- */
template <class DT>
void MergeSort<DT>::mergeSort(DT array[], int first, int last, int count, long int& comps)
{
    if (first < last)
    {
        // Same as (left + right) / 2 but avoids overflow for large
        // left and right
        int mid = first + (last - first) / 2;

        // Sort first and second halves
        mergeSort(array, first, mid, count, comps);
        mergeSort(array, mid + 1, last, count, comps);

        merge(array, first, mid, last, count, comps);
    }
}

/* -----------------------------------------------------------------------------
FUNCTION:          main()
DESCRIPTION:       
RETURNS:           0
NOTES:             
------------------------------------------------------------------------------- */
template <class DT>
void MergeSort<DT>::merge(DT array[], int first, int mid, int last, int count, long int& comps)
{

    DT tempArray[count];

    // Initialize the local indices to indicate the subarrays
    int first1 = first;         // Beginning of first subarray
    int last1 = mid;            // End of first subarray
    int first2 = mid+1;         // Beginning of second subarray
    int last2 = last;           // End of second subarray
    
    // While both subarrays are not empty, copy the smaller item into the
    // temporary array
    int index = first1; // next available location in tempArray
    while ((first1<=last1) && (first2 <=last2))
    {
        // At this point, tempArray[first..index-1] is in order
        if (array[first1] <= array[first2])
        {
            tempArray[index] = array[first1];
            first1++;
            comps++;
        }
        else
        {
            tempArray[index] = array[first2];
            first2++;
        } 
        
        index++;
        comps++;
    } 

    while (first1<=last1)
    {
        // at this point, tempArray[first..index-1] is in order
        tempArray[index] = array[first1];
        first1++;
        index++;
        comps++;
    } 

    // Finish off the second subarray, if necessary
    while (first2<=last2)
    {
        // at this point, tempArray[first..index-1] is in order
        tempArray[index] = array[first2];
        first2++;
        index++;
        comps++;
    } 

    // Copy the result back into the original array
    for (index=first; index<=last; index++)
        array[index] = tempArray[index];

}

/* -----------------------------------------------------------------------------
FUNCTION:          main()
DESCRIPTION:       
RETURNS:           0
NOTES:             
------------------------------------------------------------------------------- */
template <class DT>
void MergeSort<DT>::dataOutW(double cpuTime, long int& comps, int dataSet)
{   
    switch (dataSet)
    {
        case 1: cout << "\n1,000 Integers: Merge Sort, Worst Case\n";
                cout << "CPU Runtime: " << cpuTime << endl;
                cout << "Number of Comparisons: " << comps << endl;
                
                break;

        case 2: cout << "\n10,000 Integers: Merge Sort, Worst Case\n";
                cout << "CPU Runtime: " << cpuTime << endl;
                cout << "Number of Comparisons: " << comps << endl;
                
                break;

        case 3: cout << "\n100,000 Integers: Merge Sort, Worst Case\n";
                cout << "CPU Runtime: " << cpuTime << endl;
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
void MergeSort<DT>::dataOutB(double cpuTime, long int& comps, int dataSet)
{   
    switch (dataSet)
    {
        case 1: cout << "\n1,000 Integers: Merge Sort, Best Case\n";
                cout << "CPU Runtime: " << cpuTime << endl;
                cout << "Number of Comparisons: " << comps << endl << endl << endl;
                
                break;

        case 2: cout << "\n10,000 Integers: Merge Sort, Best Case\n";
                cout << "CPU Runtime: " << cpuTime << endl;
                cout << "Number of Comparisons: " << comps << endl << endl << endl;
                
                break;

        case 3: cout << "\n100,000 Integers: Merge Sort, Best Case\n";
                cout << "CPU Runtime: " << cpuTime << endl;
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
void MergeSort<DT>::printArray(DT array[], int count)
{   
    cout << endl;

    for(int i = 0; i < count; i++)
    {   
        cout << array[i] << " ";
    }

    cout << endl;
}

/*
*****Different algo but something is wrong with it.*****
***** Produces a seg fault 11****

// Initialize the local indices to indicate the subarrays
    int n1 = (mid - first) + 1;
    int n2 = last - mid;

    // Create temp arrays
    int left[n1], right[n2];

    // Copy data to temp arrays
    for(int i = 0; i < n1; i++)
    {
        left[i] = array[first + i];
    }

    for(int j = 0; j < n2; j++)
    {
        right[j] = array[mid + 1 + j];
    }

    // Merge the temp arrays back into array[first...last]
    int i = 0;          // Initial index of first subarray
    int j = 0;          // Initial index of second sub array
    int k = first;      // Initial index of merged subarray

    while((i < n1) && (j < n2))
    {
        if(left[i] < right[j])
        {
            array[k] = left[i]; 
            i++;
        }

        else
        {
            array[k] = right[j];
            j++;
        }

        k++;
    }

    // Copy the remaining elements of left[], if there are any
    while(i < n1)
    {
        array[k] = left[i];
        i++;
        k++;
    }

    // Copy the remaining elements of right[], if there are any
    while(j < n2)
    {
        array[k] = right[j];
        j++;
        k++;
    }
*/


#endif
