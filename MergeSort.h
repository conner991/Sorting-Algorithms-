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
    private: 
        int swaps;
        int comps;

    public:
        MergeSort();
        ~MergeSort();
        void mergeSort(DT array[], int left, int right);
        void merge(DT array[], int left, int mid, int right);
        void printArray(DT array[], int count);

};

#include "MergeSort.cpp"

#endif

