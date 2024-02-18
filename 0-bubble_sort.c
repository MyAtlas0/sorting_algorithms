#include "sort.h"

/*
 * bubble_sort - sorts an array of integers using the Bubble Sort algorithm.
 *
 * @array: pointer to the array to be sorted.
 *
 * @size: number of elements in the array.
 *
 * Description: This function sorts the elements of the array in place using
 *		the Bubble Sort algorithm.
 *		It iterates through the array multiple times,
 *		comparing adjacent elements and swapping them if they are
 *		in the wrong order.
 *		This process is repeated until the entire array is sorted.
 */

void bubble_sort(int *array, size_t size)
{
	int swapped = 1;
	size_t i;
	int tmp;

	if (size < 2)
	{
		return;
	}

	while (swapped)
	{
		swapped = 0;
		for (i = 0; i < (size - 1); i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				swapped = 1;

				print_array(array, size);
			}
		}
	}
}
