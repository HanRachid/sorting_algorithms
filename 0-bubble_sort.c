#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - sorts array with bubble sort algorithm
 *
 * @arr: array to be sorted
 * @size: size of array
 */
void bubble_sort(int arr[], size_t size)
{

	size_t i, j;
	int temp;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i; j++)
		{
			if (j + 1 < size)
			{
				if (arr[j] > arr[j + 1])
				{
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
					print_array(arr, size);
				}
			}
		}
	}
}
