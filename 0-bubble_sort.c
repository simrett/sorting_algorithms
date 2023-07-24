#include "sort.h"

/**
 * swap - Swaps array index elements.
 * @array: array to swap in
 * @a: a to swap with b.
 * @b: b to swap with a.
 */
void swap(int *array, size_t a, size_t b)
{
	int tmp;

	tmp = array[a];
	array[a] = array[b];
	array[b] = tmp;
}

/**
 * bubble_sort - Sorts array of integers in ascending order using Bubble Sort.
 * @array: Array of integers to sort.
 * @size: Size of the array(as size_t)
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	int sorted = 0;
	size_t i, sorted_i = size - 1;

	if (!array || size <= 1)
		return;
	while (!sorted)
	{
		sorted = 1;
		for (i = 0; i < sorted_i; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(array, i, i + 1);
				sorted = 0;
				print_array(array, size);
			}
		}
		sorted_i--;
	}
}


