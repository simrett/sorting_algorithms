#ifndef SORT_H
#define SORT_H

#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* macros for bitonic sort */
#define FALSE 0
#define TRUE 1

/* types */
/**
 * typedef unsigned char BOOL - Boolean data type
 * @bool_false: Represents the value false (equals 0).
 * @bool_true: Represents the value true (equals 1).
 *
 */
/* types */
typedef unsigned char BOOL;

/**
 * int_swap - Swap two integers in an array.
 * @int1: Pointer to the array of integers to be swapped.
 * @int2: Pointer to the second integer to be swapped.
 */
void int_swap(int *int1, int *int2);

/**
 * shell_sort - Sort an array using shell sort.
 * @array: Pointer to the array of integers to be sorted.
 * @size: The number of elements in the array.
 */
void shell_sort(int *array, size_t size);

/* STRUCTS */
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* printing header functions */
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

/* sort algotrithms */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

#endif /* SORT_H */
