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
/* i parcourt chaque élément sauf le dernier */
	for (i = 0; i < size - 1; i++)
	{ /* minimum contient l'indice du plus petit élément */
		minimum = i;
 /* j parcourt les éléments restants */
		for (j = i + 1; j < size; j++)
		{ /* si un élément plus petit est trouvé, on met à jour */
			if (array[j] < array[minimum])
			{
				minimum = j;
			}
		} /* si un plus petit élément a été trouvé on échange */
		if (minimum != i)
		{
			echange = array[i];
			array[i] = array[minimum];
			array[minimum] = echange;
			/* affichage du tableau après chaque échange */
			print_array(array, size);
		}
	}
}
