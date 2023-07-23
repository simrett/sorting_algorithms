#include "sort.h"

/**
 * swap_ints - Swaps two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 */
void swap_ints(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - Sorts array of integers in ascending order using Bubble Sort.
 * @array: Array of integers to sort.
 * @size: Size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	int swapped;

	if (array == NULL || size < 2)
		return;

	while (1)
	{
		swapped = 0;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(&array[i], &array[i + 1]);
				print_array(array, size);
				swapped = 1;
			}
		}
		len--;

		if (swapped == 0)
			break;
	}
}

