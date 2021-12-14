#include <stdio.h>

int main() {
    float sum = 0;
    float count = 0;
    float average;
    int i = 1;

    printf("Enter as many numbers as you like, followed by 0 to finish::\n");

    while (i != 0) {
        float x;
        scanf("%f", &x);
        i = x;
        sum = sum + x;
        count = count + 1;
    }
    count = count - 1;
    printf("Count: %g\n", count);
    printf("Sum: %g\n", sum);
    average = sum / count;
    printf("Average: %g\n", average);

    return 0;
}