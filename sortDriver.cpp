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


	//RNG
	unsigned seed = time(0);
	srand(seed);

    cout << seed << endl;

    int num = rand() % 106;
    cout << num << endl;








	
	cout << endl;
	cout << "Programmed by: " << PROGRAMMER_NAME << " -- ";
	cout << __DATE__ << "  " __TIME__ << endl;
	cout << endl;

	return 0;
}

