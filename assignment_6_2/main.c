#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct student {
    char name[100];
    int age;
}student_info;

void sort(student_info arr[], int size);

int main() {

    int count = 0;
    int size = 5;

    student_info * array = malloc(size * sizeof(student_info));

    while (1) {
        if (count + 1 >= size) {
            size += 5;
            array = realloc(array, size * sizeof(student_info));
        }

        printf("Enter your name:");
        fgets(array[count].name, 100, stdin);
        array[count].name[strlen(array[count].name) - 1] = 0;

        if (strcmp(array[count].name, "stop") == 0) {
            break;

        }

        printf("Enter your age:");
        scanf("%i", & array[count].age);
        getchar();
        count++;

    }

    if (count == 0) {
        printf("No students were given");
    } else {

        printf("\nCount: %i\n", count);
        for (int i = 0; i < count; ++i) {
            printf("Name = %s, ", array[i].name);
            printf("Age = %i\n", array[i].age);

        }

        sort(array, count);

        printf("Youngest: %s\n", array[0].name);
        printf("Oldest: %s\n", array[count - 1].name);

    }

    free(array);

    return 0;
}

void sort(student_info arr[], int size) {
    student_info temp;
    for (int c1 = 0; c1 < size - 1; ++c1) {
        for (int c2 = c1 + 1; c2 < size; ++c2) {
            if (arr[c2].age < arr[c1].age) {
                temp = arr[c1];
                arr[c1] = arr[c2];
                arr[c2] = temp;

            }

        }

    }
}