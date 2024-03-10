#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * struct listint_s - Doubly linked list node
 * @n: integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
*/
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *ar, size_t size);
void print_list(const listint_t *l);
void bubble_sort(int *arr, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *arr, size_t size);
void quick_sort(int *arr, size_t size);

void swapper(listint_t *nodeA, listint_t *nodeB, listint_t **list);

#endif /*SORT_H*/
