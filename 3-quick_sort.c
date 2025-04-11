#include "sort.h"

/**
 * quick_sort - fonction qui trie
 * @array: correspond à notre tableau
 * @size: correspond à la taille du tableau
 */

void quick_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j = 0;
	int pivot, echange;

	pivot = array[size - 1];

	for (j = 0; j < size - 1; j++)
	{
		if (array[j] < pivot)
		{
			echange = array[i];
			array[i] = array[j];
			array[j] = echange;
		}
	}
	echange = array[i + 1];
	array[i] = array[size - 1];
	array[size - 1] = echange;
}




