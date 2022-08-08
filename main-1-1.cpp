#include <iostream>

extern int printer(int array[10][10]);

int main() {

    // sample test
    int array[10][10] = {0};
    printer(array);
    
    return 0;
}