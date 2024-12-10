#ifndef SORT_H
#define SORT_H

#include <stddef.h>

/**
 * struct listint_s - Nœud d'une liste doublement chaînée
 *
 * @n: Entier stocké dans le nœud
 * @prev: Pointeur vers l'élément précédent de la liste
 * @next: Pointeur vers l'élément suivant de la liste
 */
typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;


void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);

#endif
