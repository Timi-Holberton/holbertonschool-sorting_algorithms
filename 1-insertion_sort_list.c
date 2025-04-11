#include "sort.h"

/**
 * insertion_sort_list - fonction qui trie une liste doublement
 *chaînée d'entiers dans l'ordre croissanten utilisant l'algorithmede
 *tri par insertion
 * @list: liste doublement chainée
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *noeudT, *prev, *next;

	if (list == NULL)
		return;
	noeudT = (*list)->next;/* On commence tri à partir du 2e élément*/
 /*car le 1er est déjà considéré comme trié par défaut */

	while (noeudT != NULL) /* Tant qu’on n’a pas atteint la fin de la liste*/
	{
		prev = noeudT->prev;/* prev pointe vers le nœud avant noeudT */
		next = noeudT->next;/* next pointe vers le nœud après noeudT */
/* On remonte dans liste tant qu'on n’est pas au début (prev != NULL)*/
/*et que l’élément prev est plus grand que le nœud actuel. Donc le*/
/* noeudT n’est pas à sa place. */
		while (prev != NULL && prev->n > noeudT->n)
		{
/* On change le précédent de noeudT pour qu’il pointe vers le nœud */
			noeudT->prev = prev->prev; /*d’avant prev (on le déplace) */
			prev->next = noeudT->next; /* On coupe liaison entre prev et*/
			/* noeudT et on relie prev au nœud suivant */

/* Si noeudT n’est pas le dernier, on relie l’élément suivant à prev */
			if (noeudT->next != NULL)
				noeudT->next->prev = prev;
/* Si prev n’était pas le 1er, on relie l’élément avant prev à noeudT*/
			if (prev->prev != NULL)
				prev->prev->next = noeudT;
			noeudT->next = prev; /* noeudT pointe maintenant vers prev */
			prev->prev = noeudT; /* prev pointe en arrière vers noeudT */
/* Si noeudT devient le 1er élément,on met à jour la tête de la liste */
			if (noeudT->prev == NULL)
				*list = noeudT;
/* On remonte encore d’un cran pour continuer le tri vers la gauche */
			prev = noeudT->prev;
			print_list(*list);
		} /* On passe au nœud suivant qu’on doit trier */
		noeudT = next;
	}
}
