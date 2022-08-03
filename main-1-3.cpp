#include <iostream>

extern int count_digits(int[4][4]);

int main() {

    // sample test
    int array[4][4] = {{1,2,3,4},{5,6,7,8},{9,1,2,0},{7,7,7,7}};
    count_digits(array);
    return 0;
}