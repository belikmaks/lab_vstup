#include <stdio.h>

int main() {
    int m[10] = {1, -1, 0, 4, 2, 5, 7, 8, 9, 10};
    int max = m[0];
    int min = m[0];

    for (int i = 0; i < 5; ++i) {
        if (m[i] > max) {
            max = m[i];
        } else {
            if (m[i] < min) {
                min = m[i];
            }
        }
    }

    printf("Максимальне: %d\n", max);
    printf("Мінімальне: %d\n", min);

    return 0;
}
