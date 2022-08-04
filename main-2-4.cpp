#include <iostream>

extern int sum_min_max(int[], int);

int main() {

    // sample test
    int array[5] = {3,2,5,11,4};

    std::cout << "What is the sum of the minimum and maximum values?: " << sum_min_max(array, 5)  << std::endl;
    return 0;
}