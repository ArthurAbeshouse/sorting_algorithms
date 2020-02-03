#include "sort.h"
/**
 * bubble_sort - bubble sort method
 * @array: array of integers
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	int tempor, sort = 0;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size && sort == 0; i++)
	{
		sort = 1;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tempor = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tempor;
				sort = 0;
				print_array(array, size);
			}
		}
	}
}
