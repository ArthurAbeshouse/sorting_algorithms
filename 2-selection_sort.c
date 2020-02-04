#include "sort.h"
/**
 * selection_sort - sorts an array using selection sort
 * @array: array of integers
 * @size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	int tempor;
	size_t i, j, small_index;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		small_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[small_index])
				small_index = j;
		}
		if (i != small_index)
		{
			tempor = array[i];
			array[i] = array[small_index];
			array[small_index] = tempor;
			print_array(array, size);
		}
	}
}
