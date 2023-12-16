#include <stdio.h>

int main() {
    int n;

    // Користувач вводить кількість  елементів масиву
    printf("Введіть кількість елементів масиву: ");
    scanf("%d", &n);

    // Виділення пам'яті для масиву
    int array[n];

    // Заповнення масиву
    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < n; ++i) {
        printf("Елемент %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Обчислення суми елементів
    int sum = 0;
    int *ptr = array;
    for (int i = 0; i < n; ++i) {
        sum += *(ptr + i);
    }

    // Обчислюємо та виводимо середнє значення
    double av = (double)sum / n;
    printf("Середнє значення елементів масиву: %.2f\n", av);

    return 0;
}
