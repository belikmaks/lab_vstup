#include <stdio.h>

int main() {
    // Оголошення масиву розміром 3 
    int numbers[3];

    // Введення двох чисел в масив
    printf("Введіть три числа: ");

    for (int i = 0; i < 3; i++) {
        scanf("%d", &numbers[i]);
    }
    int minNum = numbers[0];

    for (int i = 1; i < 3; i++) {
        if (numbers[i] < minNum) {
            minNum = numbers[i];
        }
    }

    printf("Найменше число: %d\n", minNum);

    return 0;
}
