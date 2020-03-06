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

// Prototypes 
void start();
void readNfill(ifstream& fileIn, int array[], int count);
void readNout(ofstream& fileOut, int array[], int count);
void db1(int dataSet);
void db2(int dataSet);
void db3(int dataSet);
void sortedTest1(int array[], int count, int dataSet);
void randomTest1(int array[], int count, int dataset);
void sortedTest2(int array[], int count, int dataSet);
void randomTest2(int array[], int count, int dataset);
void sortedTest3(int array[], int count, int dataSet);
void randomTest3(int array[], int count, int dataset);
void sortedFilesOut();
/* -----------------------------------------------------------------------------
FUNCTION:          main()
DESCRIPTION:       
RETURNS:           0
NOTES:             
------------------------------------------------------------------------------- */

int main()
{   


	start();





	
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
void start()
{	
	
	sortedFilesOut();
	
	
	char choice;
	int dataSet;

	cout << "Which data set do you want to test the\n";
	cout << "algorithms with?\n\n";
	cout << "a.) 1,000\n";
	cout << "b.) 10,000\n";
	cout << "c.) 100,000\n";

	switch(choice)
	{
		case 'a': 	dataSet = 1;
					db1(dataSet);
			break;
		
		case 'b': 	dataSet = 2;
					db2(dataSet);
			break;
		
		case 'c': 	dataSet = 3;
					db3(dataSet);
			break;
		default: cout << "\nNot a valid choice\n\n";

	}



}

/* -----------------------------------------------------------------------------
FUNCTION:          
DESCRIPTION:       
RETURNS:           0
NOTES:             
------------------------------------------------------------------------------- */
void sortedFilesOut()
{	
	int count1 = 1000;
	int count2 = 10000;
	int count3 = 100000;
	long int comps;
	ifstream fileIn1, fileIn2, fileIn3;
	ofstream fileOut1, fileOut2, fileOut3;
	int array1[count1], array2[count2], array3[count3];

	MergeSort<int> merge;

	fileIn1.open("1000_Integers_Random.txt");
	fileIn2.open("10000_Integers_Random.txt");
	fileIn3.open("100000_Integers_Random.txt");

	readNfill(fileIn1, array1, count1);
	readNfill(fileIn2, array2, count2);
	readNfill(fileIn3, array3, count3);

	merge.mergeSort(array1, 0, count1 - 1, count1, comps);
	merge.mergeSort(array2, 0, count2 - 1, count2, comps);
	merge.mergeSort(array3, 0, count3 - 1, count3, comps);

	fileOut1.open("1000_Integers_Sorted.txt");
	fileOut2.open("10000_Integers_Sorted.txt");
	fileOut3.open("100000_Integers_Sorted.txt");

	readNout(fileOut1, array1, count1);
	readNout(fileOut2, array2, count2);
	readNout(fileOut3, array3, count3);

	fileIn1.close();
	fileIn2.close();
	fileIn3.close();

	fileOut1.close();
	fileOut1.close();
	fileOut1.close();


}

/* -----------------------------------------------------------------------------
FUNCTION:          
DESCRIPTION:       
RETURNS:           0
NOTES:             1,000 integers
------------------------------------------------------------------------------- */
void readNfill(ifstream& fileIn, int array[], int count)
{
	for(int i = 0; i < count; i++)
	{
		fileIn >> array[i];
	}

}

/* -----------------------------------------------------------------------------
FUNCTION:          
DESCRIPTION:       
RETURNS:           0
NOTES:             1,000 integers
------------------------------------------------------------------------------- */
void readNout(ofstream& fileOut, int array[], int count)
{
	for(int i = 0; i < count; i++)
	{
		fileOut << array[i];
	}

}

/* -----------------------------------------------------------------------------
FUNCTION:          
DESCRIPTION:       
RETURNS:           0
NOTES:             1,000 integers
------------------------------------------------------------------------------- */
void db1(int dataSet)
{	
	int count = 1000;
	int array1[count], array2[count], array3[count];
	ifstream fileIn1;

	// Read in files of integers
	fileIn1.open("1000_Integers_Random.txt");

	readNfill(fileIn1, array1, count);
	readNfill(fileIn1, array2, count);
	readNfill(fileIn1, array3, count);
	
	randomTest1(array1, count, dataSet);
	sortedTest1(array1, count, dataSet);
	
	randomTest2(array2, count, dataSet);
	sortedTest2(array2, count, dataSet);

	randomTest3(array3, count, dataSet);
	sortedTest3(array3, count, dataSet);




	fileIn1.close();

}

/* -----------------------------------------------------------------------------
FUNCTION:          
DESCRIPTION:       
RETURNS:           0
NOTES:             10,000
------------------------------------------------------------------------------- */
void db2(int dataSet)
{
	int count = 10000;
	int array1[count], array2[count], array3[count];
	ifstream fileIn2;

	// Read in files of integers
	fileIn2.open("10000_Integers_Random.txt");

	readNfill(fileIn2, array1, count);
	readNfill(fileIn2, array2, count);
	readNfill(fileIn2, array3, count);
	
	randomTest1(array1, count, dataSet);
	sortedTest1(array1, count, dataSet);
	
	randomTest2(array2, count, dataSet);
	sortedTest2(array2, count, dataSet);

	randomTest3(array3, count, dataSet);
	sortedTest3(array3, count, dataSet);




	fileIn2.close();
}

/* -----------------------------------------------------------------------------
FUNCTION:          
DESCRIPTION:       
RETURNS:           0
NOTES:             100,000
------------------------------------------------------------------------------- */
void db3(int dataSet)
{
	int count = 100000;
	int array1[count], array2[count], array3[count];
	ifstream fileIn3;

	// Read in files of integers
	fileIn3.open("100000_Integers_Random.txt");

	readNfill(fileIn3, array1, count);
	readNfill(fileIn3, array2, count);
	readNfill(fileIn3, array3, count);
	
	randomTest1(array1, count, dataSet);
	sortedTest1(array1, count, dataSet);
	
	randomTest2(array2, count, dataSet);
	sortedTest2(array2, count, dataSet);

	randomTest3(array3, count, dataSet);
	sortedTest3(array3, count, dataSet);




	fileIn3.close();
}

/* -----------------------------------------------------------------------------
FUNCTION:          
DESCRIPTION:       
RETURNS:           0
NOTES:             Selection
------------------------------------------------------------------------------- */
void randomTest1(int array[], int count, int dataSet)
{	
	long int swaps1, swaps2;
	long int comps1, comps2, comps3;
	clock_t start1, end1, start2, end2, start3, end3;
	double cpuTime1, cpuTime2, cpuTime3;

	SelectSort<int> selection;

	// Selection Sort Worst Case
	start1 = clock();
	selection.sSort(array, count, swaps1, comps1);
    end1 = clock();
	// Get CPU time for selection sort 
    cpuTime1 = (end1 - start1) / CLOCKS_PER_SEC;
	// Ouput the data
	selection.dataOutW(cpuTime1, swaps1, comps1, dataSet);


}

/* -----------------------------------------------------------------------------
FUNCTION:          
DESCRIPTION:       
RETURNS:           0
NOTES:             Selection
------------------------------------------------------------------------------- */
void sortedTest1(int array[], int count, int dataSet)
{
	long int swaps1, swaps2;
	long int comps1, comps2, comps3;
	clock_t start1, end1, start2, end2, start3, end3;
	double cpuTime1, cpuTime2, cpuTime3;

	SelectSort<int> selection;

	// Selection Sort Best Case
	start1 = clock();
	selection.sSort(array, count, swaps1, comps1);
    end1 = clock();
	// Get CPU time for selection sort 
    cpuTime1 = (end1 - start1) / CLOCKS_PER_SEC;
	// Ouput the data
	selection.dataOutB(cpuTime1, swaps1, comps1, dataSet);

}
/* -----------------------------------------------------------------------------
FUNCTION:          
DESCRIPTION:       
RETURNS:           0
NOTES:             Insertion
------------------------------------------------------------------------------- */
void randomTest2(int array[], int count, int dataSet)
{
	long int swaps1, swaps2;
	long int comps1, comps2, comps3;
	clock_t start1, end1, start2, end2, start3, end3;
	double cpuTime1, cpuTime2, cpuTime3;

	InsertSort<int> insertion;

	// Insertion Sort
	start2 = clock();
	insertion.iSort(array, count, swaps2, comps2);
    end2 = clock();
	// Get CPU time for Insertion sort 
    cpuTime2 = (end2 - start2) / CLOCKS_PER_SEC;
	// Ouput the data
	insertion.dataOutW(cpuTime1, swaps1, comps1, dataSet);
}
/* -----------------------------------------------------------------------------
FUNCTION:          
DESCRIPTION:       
RETURNS:           0
NOTES:             Insertion
------------------------------------------------------------------------------- */
void sortedTest2(int array[], int count, int dataSet)
{
	long int swaps1, swaps2;
	long int comps1, comps2, comps3;
	clock_t start1, end1, start2, end2, start3, end3;
	double cpuTime1, cpuTime2, cpuTime3;

	InsertSort<int> insertion;

	// Insertion Sort
	start2 = clock();
	insertion.iSort(array, count, swaps2, comps2);
    end2 = clock();
	// Get CPU time for Insertion sort 
    cpuTime2 = (end2 - start2) / CLOCKS_PER_SEC;
	// Ouput the data
	insertion.dataOutB(cpuTime1, swaps1, comps1, dataSet);

}
/* -----------------------------------------------------------------------------
FUNCTION:          
DESCRIPTION:       
RETURNS:           0
NOTES:             Merge
------------------------------------------------------------------------------- */
void randomTest3(int array[], int count, int dataSet)
{	
	long int swaps1, swaps2;
	long int comps1, comps2, comps3;
	clock_t start1, end1, start2, end2, start3, end3;
	double cpuTime1, cpuTime2, cpuTime3;

	MergeSort<int> merge;

	// Merge Sort
	start3 = clock();
	merge.mergeSort(array, 0, count - 1, count, comps3);
    end3 = clock();
	// Get CPU time for Merge sort 
    cpuTime3 = (end3 - start3) / CLOCKS_PER_SEC;
	// Ouput the data
	merge.dataOutW(cpuTime1, comps1, dataSet);

}

/* -----------------------------------------------------------------------------
FUNCTION:          
DESCRIPTION:       
RETURNS:           0
NOTES:             Merge
------------------------------------------------------------------------------- */
void sortedTest3(int array[], int count, int dataSet)
{
	long int swaps1, swaps2;
	long int comps1, comps2, comps3;
	clock_t start1, end1, start2, end2, start3, end3;
	double cpuTime1, cpuTime2, cpuTime3;

	MergeSort<int> merge;

	// Merge Sort
	start3 = clock();
	merge.mergeSort(array, 0, count - 1, count, comps3);
    end3 = clock();
	// Get CPU time for selection sort 
    cpuTime3 = (end3 - start3) / CLOCKS_PER_SEC;
	// Ouput the data
	merge.dataOutB(cpuTime1, comps1, dataSet);

	
}




/* -----------------------------------------------------------------------------
FUNCTION:          
DESCRIPTION:       
RETURNS:           0
NOTES:             
------------------------------------------------------------------------------- */