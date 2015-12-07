/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

void * sortedArrayPositionsChange(int *Arr, int len)
{
	int temp;
	//getting the improper indices from front and from back
	int index1 = 0;
	int index2 = 0;
	if (Arr[0]> Arr[len - 1])
		index2 = len - 1;
	else {
		for (int i = 0; i < len; i++) {
			if (Arr[i] > Arr[i + 1]) {
				index1 = i;
				break;
			}
		}


		for (int i = len - 1; i >= 0; i--) {
			if (Arr[i] < Arr[i - 1]) {
				index2 = i;
				break;
			}
		}
	}
	//swapping
	temp = Arr[index1];
	Arr[index1] = Arr[index2];
	Arr[index2] = temp;
	return NULL;
}

