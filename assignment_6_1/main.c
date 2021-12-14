#include <stdio.h>
#include <stdlib.h>

void sort(int array[], int size);

int main() {
    int num = 0;

    printf("How many integers will you type in?\n");
    scanf("%i", &num);

    if (num == 0) {
        printf("No numbers were given\n");
    }

    int * pInt = malloc(num * sizeof(int));

    for (int i = 0; i < num; i++) {

        printf("Type a number: \n");
        scanf("%i", & pInt[i]);

    }

    printf("Count: %i\n", num);

    printf("Numbers: ");
    for (int j = 0; j < num; ++j) {
        printf("%i ", pInt[j]);
    }

    sort(pInt, num);
    printf("\nSorted: ");
    for (int i = 0; i < num; i++) {
        printf("%i ", pInt[i]);
    }

    free(pInt);
    pInt = NULL;

    return 0;
}

void sort(int array[], int size) {

    int c1, c2, temp;
    for (c1 = 0; c1 < size - 1; c1++)
        for (c2 = c1 + 1; c2 < size; c2++)
            if (array[c2] < array[c1]) {
                temp = array[c2];
                array[c2] = array[c1];
                array[c1] = temp;
            }
}
