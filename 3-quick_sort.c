#include "sort.h"
/**
 * quick_sort - sorts an array using quick sort
 * @array: array of integers
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	sorts_quickly(array, size, 0, size - 1);
}

/**
 * lomuto - partitions the array
 * @array: array of integers
 * @size: size of the array
 * @low: beginning of the index
 * @high: ending of the index
 * Return: void
 */
int lomuto(int *array, size_t size, int low, int high)
{
	int pivot = array[high];
	int i = low, j;

	for (j = low; j < high; j++)
		if (array[j] <= pivot)
		{
			quick_swap(&array[i], &array[j], array, size);
			i++;
		}
	quick_swap(&array[i], &array[j], array, size);
	return (i);
}

/**
 * sorts_quickly - quicksorts the array using lomuto
 * @array: array of integers
 * @size: size of the array
 * @low: beginning of the index
 * @high: ending of the index
 */
void sorts_quickly(int *array, size_t size, int low, int high)
{
	if (low < high)
	{
		int p = lomuto(array, size, low, high);

		sorts_quickly(array, size, low, p - 1);
		sorts_quickly(array, size, p + 1, high);
	}
}

/**
 * quick_swap - swaps and prints the array
 * @a: address of the first value
 * @b: address of the second value
 * @array: array of integers
 * @size: size of the array
 */
void quick_swap(int *a, int *b, int *array, size_t size)
{
	int t = *a;

	if (a != b)
	{
		*a = *b;
		*b = t;
		print_array(array, size);
	}
}
