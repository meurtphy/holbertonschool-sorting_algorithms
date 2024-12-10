#include "sort.h"

/**
 * swap - Échange deux éléments d'un tableau
 * @a: Pointeur vers le premier élément
 * @b: Pointeur vers le deuxième élément
 */
void swap(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

/**
 * partition - Effectue la partition selon le schéma de Lomuto
 * @array: Le tableau à trier
 * @low: L'indice de début de la partition
 * @high: L'indice de fin de la partition (pivot)
 * @size: Taille du tableau
 *
 * Return: L'indice du pivot après la partition
 */
int partition(int *array, int low, int high, size_t size)
{
int pivot = array[high];
int i = low - 1;
int j;

for (j = low; j < high; j++)
{
if (array[j] < pivot)
{
i++;
if (i != j)
{
swap(&array[i], &array[j]);
print_array(array, size);
}
}
}
if (array[i + 1] != array[high])
{
swap(&array[i + 1], &array[high]);
print_array(array, size);
}
return (i + 1);
}

/**
 * quick_sort_rec - Fonction récursive pour le tri rapide
 * @array: Le tableau à trier
 * @low: L'indice de début de la sous-partition
 * @high: L'indice de fin de la sous-partition
 * @size: Taille du tableau
 */
void quick_sort_rec(int *array, int low, int high, size_t size)
{
if (low < high)
{
int pi = partition(array, low, high, size);

quick_sort_rec(array, low, pi - 1, size);
quick_sort_rec(array, pi + 1, high, size);
}
}

/**
 * quick_sort - Trie un tableau d'entiers en ordre croissant
 *              en utilisant l'algorithme Quick Sort
 * @array: Le tableau à trier
 * @size: Taille du tableau
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;

quick_sort_rec(array, 0, size - 1, size);
}

