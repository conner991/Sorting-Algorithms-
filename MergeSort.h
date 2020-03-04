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
#ifndef __MERGESORT_H__
#define __MERGESORT_H__
#include "InsertSort.h"

template <class DT>
class MergeSort
{
    public: 
        DT mergeArray[];
        int swaps;
        int comps;

        MergeSort();
        ~MergeSort();

};

#include "MergeSort.cpp"

#endif

