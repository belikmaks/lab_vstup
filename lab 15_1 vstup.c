#include <stdio.h>

int main() {
    // Оголошення масиву розміром 2 для зберігання двох чисел
    int numbers[2];

    // Введення двох чисел в масив
    printf("Введіть перше число: ");
    scanf("%d", &numbers[0]);

    printf("Введіть друге число: ");
    scanf("%d", &numbers[1]);

    // Перевірка умови і виведення результату
    if (numbers[0] > numbers[1]) {
        printf("Перше число більше за друге: %d\n", numbers[0]);
    } else {
        printf("Обидва числа: %d та %d\n", numbers[0], numbers[1]);
    }

    return 0; 
}
