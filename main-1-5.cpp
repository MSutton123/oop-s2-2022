#include <iostream>

extern int print_summed(int[3][3], int[3][3]);

int main() {

    // sample test
    int array1[3][3] = {{1,2,3},{5,7,8},{1,1,2}};
    int array2[3][3] = {{2,2,1},{8,1,2},{3,1,5}};
    print_summed(array1, array2);
    return 0;
}