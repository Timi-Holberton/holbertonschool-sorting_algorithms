#include "sort.h"
/**
 * bubble_sort - trie un tableau d'entiers dans l'ordre croissant en
 * utilisant l'algorithme de tri à bulles
 * @array: correspond à notre pointeur qui s'oriente sur le tableau
 * @size: correspond à la taille du tableau
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, echange;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				echange = array[j];
				array[j] = array[j + 1];
				array[j + 1] = echange;
			}
		}

	}
}
