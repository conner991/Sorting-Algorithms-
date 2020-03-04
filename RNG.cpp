/* -----------------------------------------------------------------------------
FILE NAME:         RNG.cpp
DESCRIPTION:       
USAGE:             
COMPILER:          GNU g++ compiler on Linux
NOTES:             

MODIFICATION HISTORY:
Author             Date               Version
---------------    ----------         --------------
Your Name Here     01-01-2020         1.0  Original version
----------------------------------------------------------------------------- */
#include <iostream>
#include <ctime>
#include <fstream>

using namespace std;

#pragma warning(disable : 4996)

const char PROGRAMMER_NAME[] = "Conner Fissell";

/* -----------------------------------------------------------------------------
FUNCTION:          main()
DESCRIPTION:       Say something meaningful
RETURNS:           0
NOTES:             
------------------------------------------------------------------------------- */

int main()
{   
    int ARRAY_SIZE1 = 1000;
    int ARRAY_SIZE2 = 10000;    
    int ARRAY_SIZE3 = 100000;
    int range = 1000000;
    int num1[ARRAY_SIZE1];
    int num2[ARRAY_SIZE2];
    int num3[ARRAY_SIZE3];
    string textFile1 = "1000_Integers.txt";
    string textFile2 = "10000_Integers.txt";
    string textFile3 = "100000_Integers.txt";
    ofstream outFile1, outFile2, outFile3;

	//RNG
	unsigned seed = time(0);
	srand(seed);

    // Create files to store numbers
    outFile1.open(textFile1);
    outFile2.open(textFile2);
    outFile3.open(textFile3);

    // Fill up the files
    for (int i = 0; i < ARRAY_SIZE1; i++)
    {
        num1[i] = rand() % range;
        outFile1 << num1[i] << endl;
    }

    for (int j = 0; j < ARRAY_SIZE2; j++)
    {
        num2[j] = rand() % range;
        outFile2 << num2[j] << endl;
    }

    for (int k = 0; k < ARRAY_SIZE3; k++)
    {
        num3[k] = rand() % range;
        outFile3 << num3[k] << endl;
    }


    outFile1.close();
    outFile2.close();
    outFile3.close();

	
	cout << endl;
	cout << "Programmed by: " << PROGRAMMER_NAME << " -- ";
	cout << __DATE__ << "  " __TIME__ << endl;
	cout << endl;

	return 0;
}