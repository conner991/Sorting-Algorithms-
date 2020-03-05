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
#ifndef __SELECTSORT_H__
#define __SELECTSORT_H__

#include <iostream>
#include <string>
#include <fstream>
using namespace std;


template <class DT>
class SelectSort
{
    private:         
        int swaps;
        int comps;

    public:
        SelectSort();
        ~SelectSort();
        void sSort(DT array[], int count);
        void printArray(DT array[], int count);
};


const char PROGRAMMER_NAME[] = "Conner Fissell";

#include "SelectSort.cpp"

#endif