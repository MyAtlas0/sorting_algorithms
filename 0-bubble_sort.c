#include "sort.h"

/*
 * bubble_sort - sorts an array of integers using the Bubble Sort algorithm.
 *
 * @array: pointer to the array to be sorted.
 *
 * @size: number of elements in the array.
 *
 * Description: This function sorts the elements of the array in place.
 *		It iterates through the array multiple times,
 *		compares adjacent elements and swap them if unsorted.
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
		for (i = 0; i < size - 1; i++)
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
