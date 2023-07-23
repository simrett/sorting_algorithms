#include "sort.h"

/*
 * swap - Swaps elements in an array at two given indices.
 * @array: Pointer to the array.
 * @ind_1: First index to swap.
 * @ind_2: Second index to swap.
 *
 * swaps the elements at indices 'ind_1' and 'ind_2' in the given array.
 */
void swap(int *array, size_t ind_1, size_t ind_2);

/**
 * bubble_sort - performs bubble sort on an array
 * @array: array to sort (of ints)
 * @size: size of array (as size_t)
 */
void bubble_sort(int *array, size_t size)
{
	int swapped;
	size_t i, sorted_i = size - 1;

	if (array == NULL || size <= 1)
		return;
	while (1)
	{
		swapped = 0;
		for (i = 0; i < sorted_i; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(array, i, i + 1);
				swapped = 1;
				print_array(array, size);
			}
		}
		if (swapped == 0)
			break;
		sorted_i--;
	}
}

/**
 * swap - swaps array index elements
 * @array: array to swap in
 * @ind_1: index 1 to swap with index 2
 * @ind_2: index 2 to swap with index 1
 */

void swap(int *array, size_t ind_1, size_t ind_2)
{
	int temp = array[ind_1];

	array[ind_1] = array[ind_2];

	array[ind_2] = temp;

}
