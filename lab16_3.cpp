#include <stdio.h>

int main() {
    int rows = 4;
    int cols = 4;
    

    int mtrx[4][4] = {{1, 4, 7, 6}, {6, 7, 0, 3}, {9, 8, 5, 1}, {8, 9, 10, 5}};

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", mtrx[i][j]);
        }
        printf("\n");
    }
        int product = 1;
        for (int i = 0; i < rows; i++) {
        int maxElement = mtrx[i][0];     // припускаємо, що перший елемент - найбільший
        for (int j = 1; j < cols; j++) {
            if (mtrx[i][j] > maxElement) {
                maxElement = mtrx[i][j];
            }
        }
        product *= maxElement;
    }

    // Виведення результату
    printf("Добуток максимальних елементів в кожному рядку: %d\n", product);

    return 0;
}