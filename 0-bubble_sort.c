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

	for (i = 0; i < size - 1; i++)	/* i compte un passage jusqu'à ce que le*/
					/* plus grand nombre soit à sa place */
	{
		for (j = 0; j < size - i - 1; j++)	/* j avance dans le tableau sans*/
	/*prendre en compte le dernier élément puisque j + 1 dans la condition*/
/* il déduit le nombre de tour de la première boucle, size = 10, 9, 8...*/
		{
			if (array[j] > array[j + 1])	/* si l'élément de gauche */
			{				/* est plus grand que celui de droite */
				echange = array[j];	/* on garde l'élément de gauche */
				array[j] = array[j + 1];	/* on met le plus petit à gauche */
				array[j + 1] = echange;	/* on met le plus grand à droite */
			}
			print_array(array, size);	/* on affiche le tableau */
		}
	}
}
