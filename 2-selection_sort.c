#include "sort.h"

/*
 * selection_sort - Sorts an array of integers in ascending order using
 *		the selection sort algorithm.
 *
 * @array: Pointer to the array to be sorted.
 *
 * @size: Size of the array.
 *
 * Description: This function sorts an array of integers in ascending order
 *		using the selection sort algorithm.
 *		It iterates through the array, selecting the minimum element
 *		in each pass and swapping it with the element at the beginning
 *		of the unsorted portion of the array.
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min, tmp;
	int swapped;

	if (size < 2)
	{
		return;
	}

	for (i = 0; i < (size - 1); i++)
	{
		swapped = 0;
		min = i;
		for (j = (i + 1); j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
				swapped = 1;
			}
		}
		if (swapped)
		{
			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}
		/**print_array(array, size);**/
	}
}
