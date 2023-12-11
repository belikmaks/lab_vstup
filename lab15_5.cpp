#include <stdio.h>
#define size 6

int main() {
    
    int numbers[size];   // Оголошення масиву
    int reversedNumbers[size];  // Оголошення оберненого масиву

    // Введення елементів масиву з клавіатури
    printf("Введіть %d чисел:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }

    // Обчислення оберненого масиву
    for (int i = 0; i < size; i++) {
        reversedNumbers[i] = numbers[size - 1 - i];
    }

    // Виведення оберненого масиву
    printf("Обернений масив:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", reversedNumbers[i]);
    }

    return 0;
}
