#include <stdio.h>

int main() {
    
    int array[] = {1, 2, 3, 4, 5};
    
    // Змінна для накопичення суми
    int sum = 0;

    // Цикл для обробки елементів масиву
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        // Накопичення суми
        sum += array[i];
    }

    // Виведення результату
    printf("Сума елементів масиву: %d\n", sum);

    return 0;
}
