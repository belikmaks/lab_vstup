#include <stdio.h>
#include <cstdlib>
#define arraySize 10

int main() {
    // Оголошення масиву розміром 10 
    int array[arraySize];

    for(int i = 0; i < arraySize; i++)
    {
         array[i] = rand();              //Заповнення масиву
         printf("%d\n",array[i]);
    }
    for (int i = 0; i < arraySize; i += 2) {
        array[i] = 0;                          //обнулення парних елементів
    }
    printf("Масив після обнулення парних елементів:\n");
    for (int i = 0; i < arraySize; ++i) {
    printf("%d ", array[i]);                   //Виведення масиву після обнулення
    }
    return 0; 
    }