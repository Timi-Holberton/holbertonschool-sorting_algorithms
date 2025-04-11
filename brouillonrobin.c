#include "sort.h"

/**
 * selection_sort - fonction qui trie un tableau d'entier par ordre croissant
 * à l'aide de l'algorithme de tri : selection
 * @array: correspond à notre tableau
 * @size : correspond à la taille du tableau
 */
 void selection_sort(int *array, size_t size)
 {
	 size_t i, j, echange, min;

	 for (i = 0; i < size; ++i)
	 {
		min = i - 1;
		 for (j = i + 1; j < size; ++j)
		 {
			 if (array[i] > array[j])
			 {
				 echange = array[i];
				 array[i] = array[j];
				 array[j] = echange;
				 print_array(array, size);
			 }
		 }
	 }
 }
