#include <stdio.h>

int main(){
    int rows = 4;
    int cols = 4;
    
    

    int mtrx[4][4] = {{1,4,7,6},{6,7,0,3},{9,8,5,1},{8,9,10,5}};
     //виведення матриці
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d\t", mtrx[i][j]);
        }
        printf("\n");
    }

    int sumAboveDiagonal = 0;
    

    // Обчислення суми елементів вище головної діагоналі
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (j > i) {
                sumAboveDiagonal += mtrx[i][j];
                
            }
        }
    }

     // Виведення суми
    printf("Сума елементів вище головної діагоналі: %d\n", sumAboveDiagonal);

    return 0;

}