#include "sort.h"
#include <stdio.h>

void bubble_sort(int *array, size_t size)

{

int temp;
int swapped;

if (size < 2)
return;

do

{
swapped = 0;

for (size_t i = 0; i < size - 1; i++)
{

if (array[i] > array[i + 1])
{
temp = array[i];
array[i] = array[i + 1];
array[i + 1] = temp;
swapped = 1;
}
}
size--;
}

while (swapped);

}

