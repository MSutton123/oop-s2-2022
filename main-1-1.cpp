#include <iostream>

extern int sum_diagonal(int[4][4]);

int main() {

    // sample test
    int array[4][4] = {{1,3,5,7},{-1,6,2,2},{8,7,4,5},{1,5,2,10}};
    std::cout << "The diagonal sum of  the array is: " << sum_diagonal(array) << std::endl;
    
    return 0;
}