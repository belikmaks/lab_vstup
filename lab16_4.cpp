#include <stdio.h>

int main() {
    int M, N;

    // Введення розмірів матриці
    printf("Введіть кількість рядків: ");
    scanf("%d", &M);
    printf("Введіть кількість стовпців: ");
    scanf("%d", &N);

    int matrix[M][N];
    int counter = 1;

    // Заповнення матриці "змійкою"
    for (int i = 0; i < M; i++) {
        if (i % 2 == 0) {
            // Заповнення зліва направо
            for (int j = 0; j < N; j++) {
                matrix[i][j] = counter++;
            }
        } else {
            // Заповнення справа наліво
            for (int j = N - 1; j >= 0; j--) {
                matrix[i][j] = counter++;
            }
        }
    }

    // Виведення матриці
    printf("Заповнена 'змійкою' матриця:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
