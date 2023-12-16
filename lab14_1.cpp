#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[5];
    int *ptr = array;
    int *maxPtr, *minPtr;

    printf("Введіть 5 чисел:\n");

    for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i) {
        scanf("%d", &ptr[i]);
    }

    
    maxPtr = minPtr = ptr;
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i) {
        if (ptr[i] > *maxPtr) {
            maxPtr = &ptr[i];
        } else if (ptr[i] < *minPtr) {
            minPtr = &ptr[i];
        }
    }

    
    int distance = maxPtr - minPtr;

    printf("Максимальний елемент: %d (позиція %ld)\n", *maxPtr, maxPtr - ptr);
    printf("Мінімальний елемент: %d (позиція %ld)\n", *minPtr, minPtr - ptr);
    printf("Відстань по позиціях між мінімальним і максимальним: %d\n", distance);


    return 0;
}
