#include "sort.h"

#include <stdio.h>

void swap(int *array, size_t pos1, size_t pos2);


/**
 * selection_sort - Performs selection sort on an array of integers.
 * @array: Array to sort (of ints).
 * @size: Size of the array (as size_t).
 * @array: The array to be sorted (of ints).
 * @size: The number of elements in the array(as size_t).
 * Description:
 * selection_sort function sorts the given array in ascending order using
 * Selection Sort algorithm. It repeatedly finds the minimum element in the
 * unsorted portion of the array and places it at the beginning of the sorted
 * portion.
 */
void selection_sort(int *array, size_t size)
{
	size_t unsorted_i = 0, min_pos = 0, sorted_i = 0;

	if (!array || size <= 1)
		return;
	while (sorted_i < size)
	{
		unsorted_i = sorted_i;
		min_pos = sorted_i;

		/* Find the position of the minimum element in the unsorted portion */
		while (unsorted_i < size)
		{
			if (array[unsorted_i] < array[min_pos])
			{
				min_pos = unsorted_i;
				if (unsorted_i + 1 == size)
					break;
			}
			unsorted_i++;
		}

		/* Swap the minimum element with the first element of the unsorted portion */
		if (array[min_pos] < array[sorted_i])
		{
			swap(array, sorted_i, min_pos);
			print_array(array, size);
		}
		sorted_i++;
	}
}

/**
 * swap - Swaps two elements in an array.
 * @array: The array in which the elements will be swapped.
 * @idx1: Index of the first element to swap with second element.
 * @idx2: Index of the second element to swap with first element.
 */
void swap(int *array, size_t idx1, size_t idx2)
{
	int temp;

	temp = array[idx2];
	array[idx2] = array[idx1];
	array[idx1] = temp;
}
