#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - sorts array with selection sort algorithm
 *
 * @array: array to be sorted
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t j, i;
	int temp, *key;

	key = NULL;
	for (j = 0; array && j < size - 1; j++)
	{
		key = NULL;
		for (i = j + 1; i < size; i++)
		{
			if (array[i] < array[j])
			{
				if (key && array[i] < *key)
					key = &array[i];
				if (!key)
					key = &array[i];
			}
		}
		if (key)
		{
			temp = *key;
			*key = array[j];
			array[j] = temp;
			print_array(array, size);
		}
	}
}
