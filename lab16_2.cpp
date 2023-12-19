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

    for (int i = 0; i < rows; i++) {
        double sum = 0;  // Сума рядка обнуляється на кожній ітерації
        for (int j = 0; j < cols; j++) {
            sum += mtrx[i][j];
        }
        double average = sum / cols;  // середнє значення
        printf("Середнє арифметичне рядка %d: %.2f\n", i, average);
    }

    return 0;
}
