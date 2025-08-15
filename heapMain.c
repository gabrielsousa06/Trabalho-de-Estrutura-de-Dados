#include "heap.h"

int main() {
    int array[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(array) / sizeof(array[0]);

    printf("Array original:\n");
    printArray(array, n);

    heapSort(array, n);

    printf("Array ordenado:\n");
    printArray(array, n);

    return 0;
}