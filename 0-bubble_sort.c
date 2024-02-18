#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	int swapped = 1;
	size_t last_swappedIndex = 0;
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
				last_swappedIndex = i + 1;

				print_array(array, size);
			}
		}
		size = last_swappedIndex;
	}
}
