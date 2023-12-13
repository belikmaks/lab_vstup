#include <stdio.h>

int main() {
    // Оголошення масиву розміром 7 
    int numbers[7];

    printf("Заповніть масив:\n");
    for (int i = 0; i < 7; i++) {
        scanf("%d", &numbers[i]);  //заповнення масиву через клавіатуру
    }
    int sum = 0;
    for (int i = 0; i < 7; i++) {
        sum += numbers[i];
    }
    printf("Сума елементів масиву: %d\n", sum);  //вивід суми елементів

    return 0;
}
