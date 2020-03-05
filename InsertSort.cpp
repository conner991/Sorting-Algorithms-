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
void InsertSort<DT>::iSort(DT array[], int count)
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

#endif
