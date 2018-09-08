#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
	/* Program prints out a palindrom of 1's in a pyramid order based on the height
	specified by the user. */

	// Integer value for height specified by user.
	int pyramidRows;

	cout << "Specify the height of the pyramid between 1 and 7: ";
	cin >> pyramidRows;

	if (pyramidRows == 1)
	{
		// To print out the 1 if the user enters 1.
		cout << pyramidRows << endl;	
	}

	if (pyramidRows > 1 && pyramidRows <= 7)
	{
		int counter = 1;
		long base = 1;
		cout << counter << endl;
		for (counter = 1; counter < pyramidRows; counter++)
		{
			// To raise the 1 by 11 base through each iteration of the loop.
			base = base * 10 +1;
			
			/* Large integer type to hold the base 11 powers that are 
			multiplied by themselves. */
			
			long result  = base * base;

			/* Large base 11 powered numbers are printed through each 
			loop iteration until loop counter reaches end. */
			
			cout << result << endl;
		}
	}
        return 0;
}
