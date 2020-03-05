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
#ifndef __INSERTSORT_H__
#define __INSERTSORT_H__
#include "SelectSort.h"

template <class DT>
class InsertSort
{
    private: 
        int swaps;
        int comps;

    public:
        InsertSort();
        ~InsertSort();
        void iSort(DT array[], int count);

};

#include "InsertSort.cpp"

#endif
