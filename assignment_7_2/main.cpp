#include <iostream>
#include <string>

int main() {
    int array[100] = {
            0
    };
    int k = 1;
    int i = 0, median;
    double sum = 0, average;
    while (k != 0) {
        std::cin >> array[i];
        k = array[i];
        i++;
    }
    for (int j = 0; j < i - 1; ++j)
        sum = sum + array[j];
    average = sum / (i - 1);
    median = array[(i - 1) / 2];

    std::cout << "Count = " << i-1 << std::endl;
    std::cout << "Average = " << average << std::endl;
    std::cout << "Median = " << median << std::endl;
    return 0;
}