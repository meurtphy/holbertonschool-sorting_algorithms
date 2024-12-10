#include "sort.h"
#include <stdio.h>

/**
 * swap_nodes - Échange deux nœuds dans une liste doublement chaînée.
 * @list: Pointeur vers la tête de la liste.
 * @node1: Premier nœud à échanger.
 * @node2: Deuxième nœud à échanger.
 */
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
if (node1->prev)
node1->prev->next = node2;
else
*list = node2;

if (node2->next)
node2->next->prev = node1;

node1->next = node2->next;
node2->prev = node1->prev;

node1->prev = node2;
node2->next = node1;
}

/**
 * insertion_sort_list - Trie une liste doublement chaînée en ordre croissant
 *                       en utilisant l'algorithme du tri par insertion.
 * @list: Pointeur vers la tête de la liste.
 */
void insertion_sort_list(listint_t **list)
{
listint_t *current, *temp;

if (!list || !*list || !(*list)->next)
return;

current = (*list)->next;
while (current)
{
temp = current;
while (temp->prev && temp->n < temp->prev->n)
{
swap_nodes(list, temp->prev, temp);
print_list(*list);
}
current = current->next;
}
}

