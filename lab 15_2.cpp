#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define arraySize 10 // Розмір масиву
int main() {
    srand(time(NULL)); // Встановлення seed для генератора випадкових чисел
    // Заповнення масиву випадковими числами
    int array[arraySize];
    for (int i = 0; i < arraySize; ++i) {
        array[i] = rand() % 100; // Генерація випадкового числа в діапазоні від 0 до 99
    }
    printf("Початковий масив: ");    // Виведення початкового масиву
    for (int i = 0; i < arraySize; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
    // Обнулення парних елементів
    for (int i = 0; i < arraySize; ++i) {
        if (array[i] % 2 == 0) {
            array[i] = 0;
        }
    }
    printf("Масив після обнулення парних елементів: ");    // Виведення результату
    for (int i = 0; i < arraySize; ++i) {
        printf("%d ", array[i]);
    }
    return 0;
}
 
