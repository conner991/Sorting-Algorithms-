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
#include "MergeSort.h"

/* -----------------------------------------------------------------------------
FUNCTION:          main()
DESCRIPTION:       
RETURNS:           0
NOTES:             
------------------------------------------------------------------------------- */

int main()
{   
	int testArray[] = {5, 67, 2, 0, 7, 4, 8, 1, 22, 12, 6, 10, 9};
	int count = sizeof(testArray) / sizeof(testArray[0]);
	ifstream fileIn1, fileIn2, fileIn3;
	
	SelectSort<int> selection;
	InsertSort<int> insertion;
	MergeSort<int> merge;

	// Read in files of integers
	fileIn1.open("1000_Integers.txt");
	fileIn2.open("10000_Integers.txt");
	fileIn3.open("100000_Integers.txt");

	// Selection Sort
	selection.sSort(testArray, count);
	selection.printArray(testArray, count);

	// Insertion Sort
	insertion.iSort(testArray, count);
	insertion.printArray(testArray, count);
	
	// Merge Sort
	merge.mergeSort(testArray, 0, count - 1, count);
	merge.printArray(testArray, count);






	fileIn1.close();
	fileIn2.close();
	fileIn3.close();



	
	cout << endl << endl;
	cout << "Programmed by: " << PROGRAMMER_NAME << " -- ";
	cout << __DATE__ << "  " __TIME__ << endl;
	cout << endl;

	return 0;
}

/* -----------------------------------------------------------------------------
FUNCTION:          main()
DESCRIPTION:       
RETURNS:           0
NOTES:             
------------------------------------------------------------------------------- */
