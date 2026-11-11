#include "main.h"

/**
 * reverse_array - Reverses an array of integers in place
 * @a: Array to reverse
 * @n: Number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int start;
	int end;
	int temp;

	start = 0;
	end = n - 1;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
