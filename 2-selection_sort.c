#include "sort.h"

/**
 * swap_items - swaps two items in an array
 * @array: the array to modify
 * @l: the index of the left item
 * @r: the index of the right item
 */
void swap_items(int *array, size_t l, size_t r)
{
	int tmp;

	if (array != NULL)
	{
		tmp = array[l];
		array[l] = array[r];
		array[r] = tmp;
	}
}

/**
 * selection_sort - sorts an array using the selection sort algorithm
 * @array: the array to sort
 * @size: the length of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, low_idx;

	if (array != NULL)
	{
		for (i = 0; i < size - 1; i++)
		{
			low_idx = i;
			for (j = size - 1; j > i; j--)
			{
				if (array[j] < array[low_idx])
				{
					low_idx = j;
				}
			}
			if (i != low_idx)
			{
				swap_items(array, i, low_idx);
				print_array(array, size);
			}
		}
	}
}
