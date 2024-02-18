#include "sort.h"


void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j, min, tmp;

	if (size < 2)
	{
		return;
	}

	while (i < (size - 1))
	{
		min = i;
		j = i + 1;
		while (j < size)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
			j++;
		}

		tmp = array[min];
		array[min] = array[i];
		array[i] = tmp;

		print_array(array, size);
		i++;
	}

}
