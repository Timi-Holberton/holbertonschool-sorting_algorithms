#include "sort.h"

/**
 * selection_sort - fonction qui trie un tableau d'entier par ordre croissant
 * à l'aide de l'algorithme de tri : selection
 * @array: correspond à notre tableau
 * @size : correspond à la taille du tableau
 */
void selection_sort(int *array, size_t size)
{
	size_t i, minimum, j, echange;

	for (i = 0; i < size - 1; i++)
	{
		minimum = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[minimum])
				{
					minimum = j;
				}
			echange = array[i];
			array[i] = array[minimum];
			array[minimum] = echange;
			print_array(array, size);
		}
	}
}


