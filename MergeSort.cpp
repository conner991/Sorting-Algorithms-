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
NOTES:             
------------------------------------------------------------------------------- */
template <class DT>
void MergeSort<DT>::mergeSort(DT array[], int first, int last)
{
    if (first < last)
    {
        // Same as (left + right) / 2 but avoids overflow for large
        // left and right
        int mid = (first + (last - first)) / 2;

        // Sort first and second halves
        mergeSort(array, first, mid);
        mergeSort(array, mid + 1, last);

        merge(array, first, mid, last);
    }
}

/* -----------------------------------------------------------------------------
FUNCTION:          main()
DESCRIPTION:       
RETURNS:           0
NOTES:             
------------------------------------------------------------------------------- */
template <class DT>
void MergeSort<DT>::merge(DT array[], int first, int mid, int last)
{
    static const int arraySize = (sizeof(array) / sizeof(array[0]));
    DT tempArray[arraySize];

    // Initialize the local indices to indicate the subarrays
    int first1 = first;
    int last1 = mid;
    int first2 = mid + 1;
    int last2 = last;

    // While both subarrays are NOT empty, copy the smaller 
    // item into the tempArray
    int index = first1;         // Next available location in tempArray
    while((first1 <= last1) && (first2 <= last2))
    {
        // At this point, tempArray[first...index - 1] is in order
        if(array[first1] <= array[first2])
        {
            tempArray[index] = array[first1];
            first++;
        }

        else
        {
            tempArray[index] = array[first2];
            first2++;
        }

        index++;
    }

    while(first1 <= last1)
    {
        // At this point, tempArray[first...index - 1] is in order
        tempArray[index] = array[first1];
        first1++;
        index++;
    }

    // Finish off the second subarray if necessary
    while(first2 <= last2)
    {
        // At this point, tempArray[first...index - 1] is in order
        tempArray[index] = array[first2];
        first2++;
        index++;
    }

    // Copy the result back into the original array
    for(index = first; index <= last; index++)
    {
        array[index] = tempArray[index];
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
    for(int i = 0; i < count; i++)
    {
        cout << array[i] << " ";
    }
}


#endif
