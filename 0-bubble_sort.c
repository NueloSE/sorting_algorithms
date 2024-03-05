#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in asceding order
 * @array: a pointer to the array to be sorted
 * @size: length of the arrary
 * Returns: A sorted array
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, size_cpy = size;
	int tmp = 0, total = 0;
	bool contIteration = false;

	while (size_cpy > 0)
	{
		for (i = 0; i <= size_cpy; i++)
		{
			if ((i + 1) >= size_cpy)
				break;
			total += 1;
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
				contIteration = true;
			}
		}
		if (!contIteration)
		{
			return;
		}
		size_cpy--;
	}
}
