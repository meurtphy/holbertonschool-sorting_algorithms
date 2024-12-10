#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - Trie un tableau d'entiers en ordre croissant
 *               avec l'algorithme Bubble Sort.
 * @array: Le tableau à trier
 * @size: Taille du tableau
 */
void bubble_sort(int *array, size_t size)
{
size_t i;
int temp;
int swapped;

if (size < 2)
return;

do {
swapped = 0;
for (i = 0; i < size - 1; i++)
{
if (array[i] > array[i + 1])
{
temp = array[i];
array[i] = array[i + 1];
array[i + 1] = temp;

swapped = 1;

print_array(array, size);
}
}
size--;
} while (swapped);
}

