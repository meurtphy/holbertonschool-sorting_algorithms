
Here’s an optimized, shorter, clearer, and translated README.md for your project:

Holberton School - Sorting Algorithms
This repository contains implementations of various sorting algorithms with explanations and examples.

1. Bubble Sort
Description: Bubble Sort compares adjacent elements and swaps them if they are in the wrong order. This process repeats until the array is sorted.

c
Copier le code
void bubble_sort(int *array, size_t size) {
    size_t i, j;
    int temp, swapped;

    if (array == NULL || size < 2)
        return;

    for (i = 0; i < size - 1; i++) {
        swapped = 0;

        for (j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                print_array(array, size);
                swapped = 1;
            }
        }

        if (!swapped)
            break;
    }
}
2. Insertion Sort
Description: Insertion Sort gradually builds a sorted portion of the array by inserting elements from the unsorted portion into their correct position.

c
Copier le code
void insertion_sort_list(listint_t **list) {
    listint_t *current, *temp;

    if (!list || !*list || !(*list)->next)
        return;

    current = (*list)->next;
    while (current) {
        temp = current;

        while (temp->prev && temp->n < temp->prev->n) {
            swap_nodes(list, temp->prev, temp);
            print_list(*list);
        }
        current = current->next;
    }
}
3. Selection Sort
Description: Selection Sort repeatedly finds the smallest element in the unsorted part of the array and swaps it with the first unsorted element.

c
Copier le code
void selection_sort(int *array, size_t size) {
    size_t i, j, min_idx;
    int temp;

    if (array == NULL || size < 2)
        return;

    for (i = 0; i < size - 1; i++) {
        min_idx = i;

        for (j = i + 1; j < size; j++) {
            if (array[j] < array[min_idx])
                min_idx = j;
        }

        if (min_idx != i) {
            temp = array[i];
            array[i] = array[min_idx];
            array[min_idx] = temp;
            print_array(array, size);
        }
    }
}
4. Quick Sort
Description: Quick Sort is a divide-and-conquer algorithm that partitions the array around a pivot and recursively sorts each partition.

Main Function:
c
Copier le code
void quick_sort(int *array, size_t size) {
    if (array == NULL || size < 2)
        return;

    quick_sort_rec(array, 0, size - 1, size);
}
Recursive Function:
c
Copier le code
void quick_sort_rec(int *array, int low, int high, size_t size) {
    if (low < high) {
        int pi = partition(array, low, high, size);
        quick_sort_rec(array, low, pi - 1, size);
        quick_sort_rec(array, pi + 1, high, size);
    }
}
Lomuto Partition:
c
Copier le code
int partition(int *array, int low, int high, size_t size) {
    int pivot = array[high], i = low - 1, j;

    for (j = low; j < high; j++) {
        if (array[j] < pivot) {
            i++;
            if (i != j) {
                swap(&array[i], &array[j]);
                print_array(array, size);
            }
        }
    }

    if (array[i + 1] != array[high]) {
        swap(&array[i + 1], &array[high]);
        print_array(array, size);
    }

    return i + 1;
}
Swap Function:
c
Copier le code
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
Bonus: Lomuto Partition
Lomuto Partition is a method in Quick Sort for rearranging elements relative to a pivot:

Elements smaller than the pivot go to the left.
Elements larger than the pivot go to the right.
The pivot is placed in its final sorted position.
This README.md is now shorter, more concise, and presented in clear English for better readability and understanding.