#include "sort.h"

/**
 * swap - swaps 2 index in an array
 * @arr: point to the array
 * @a: the first index
 * @b: the 2nd index
 * Return: void
*/

void swap(int *arr, int a, int b)
{
	int tmp = arr[a];

	arr[a] = arr[b];
	arr[b] = tmp;
}

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: the array to be sorted
 * @size: the size of the array
 * Return: void
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			swap(array, i, min);
			print_array(array, size);
		}
	}
}
