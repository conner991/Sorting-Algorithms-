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
void SelectSort<DT>::sSort(DT array[], int count)
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
            }
        }

        temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }
}

#endif
