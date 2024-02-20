#include "sort.h"


/**
 * quick_sort - Sorts an array of integers in ascending order using the
 *		quick Sort algorithm.
 *
 * @array: Pointer to the first element of the array to be sorted.
 *
 * @size:  Number of elements in the array.
 */

void quick_sort(int *array, size_t size)
{
	if (!array || size <= 1)
	{
		return;
	}
	quick_sortIndex(array, 0, size - 1, size);
}



/**
 * quick_sortIndex - Recursively sorts a sub-array of integers in ascending
 *			order using the Quick Sort algorithm.
 *
 * @array: Pointer to the first element of the sub-array to be sorted.
 *
 * @first: Index of the first element of the sub-array
 *
 * @last: Index of the last element of the sub-array.
 *
 * @size: Number of elements in the array.
 */

void quick_sortIndex(int *array, ssize_t first, ssize_t last, size_t size)
{
	size_t sort_Index;

	if (first < last)
	{
		sort_Index = lomuto_partition(array, first, last, size);
		quick_sortIndex(array, first, sort_Index - 1, size);
		quick_sortIndex(array, sort_Index + 1, last, size);
	}
}



/**
 * lomuto_partition - Partitions a sub-array using the Lomuto partition scheme
 *			for the Quick Sort algorithm.
 *
 * @array: Pointer to the first element of the sub-array to be partitioned.
 *
 * @first: Index of the first element of the sub-array.
 *
 * @last: Index of the last element of the sub-array.
 *
 * @size: Number of elements in the array.
 *
 * Return: Index of the pivot element after partitioning.
 */

int lomuto_partition(int *array, ssize_t first, ssize_t last, size_t size)
{
	int pivot = array[last];
	ssize_t i = first - 1;
	ssize_t j = first;

	while (j < last)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
		j++;
	}

	if (array[i + 1] != array[last])
	{
		swap(&array[i + 1], &array[last]);
		print_array(array, size);
	}
	return (i + 1);
}



/**
 * swap - Function to swap two integers.
 *
 * @first: Pointer to the first integer
 *
 * @second: Pointer to the second integer
 */

void swap(int *first, int *second)
{
	int tmp;

	tmp = *first;
	*first = *second;
	*second = tmp;
}
