#include <iostream>

extern int print_scaled(int[3][3], int);

int main() {

    // sample test
    int array[3][3] = {{1,2,3},{5,7,8},{1,1,2}};
    print_scaled(array, 2);
    return 0;
}