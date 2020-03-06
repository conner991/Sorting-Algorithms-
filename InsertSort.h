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
        void iSort(DT array[], int count, long int& swaps, long int& comps);
        void dataOutW(double cpuTime1, long int& swaps1, long int& comps1, int dataSet);
        void dataOutB(double cpuTime1, long int& swaps1, long int& comps1, int dataSet);
        void printArray(DT array[], int count);

};

#include "InsertSort.cpp"

#endif
