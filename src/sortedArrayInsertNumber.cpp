/*
OVERVIEW: Given a sorted array, insert a given number into the array at appropriate position.
E.g.: Arr = [2, 4, 6], num = 5 final Arr = [2, 4, 5, 6]. 5 is inserted at 2nd index.

INPUTS: Integer	Array pointer, length of the array, number to be inserted.

OUTPUT: Array pointer after inserting number.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Use realloc to allocate memory.
*/

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int * sortedArrayInsertNumber(int *Arr, int len, int num)
{
	if (len < 0)
		return NULL;
	if (Arr == NULL)
		return NULL;
	int index = 0;
	Arr = (int *)realloc(Arr, len++);
	if (Arr[0] > num) {
		index = 0;
	}
	else if (Arr[len] < num)
		Arr[len] = num;
	else {
		for (index = 0; index < len; index++) {
			if (Arr[index] > num)
				break;
		}
	}
	for (int index1 = len; index1 > index; index1++) {
		Arr[index1] = Arr[index1 - 1];
	}
	Arr[index] = num;
	return NULL;
}