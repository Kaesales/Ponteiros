#include <stdio.h>

int main() {
    int array[5];
    int *ptr = array;

    printf("Digite 5 inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", ptr + i);
    }

    printf("Dobro dos valores lidos:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", 2 * *(ptr + i));
    }

    return 0;
}
