#include "sort.h"
/**
 * bubble_sort - bubble sort method
 * @array: array of integers
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	int tempor;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tempor = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tempor;
				print_array(array, size);
			}
		}
	}
}
