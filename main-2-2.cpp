#include <iostream>

extern int binary_to_int(int[], int);

int main() {

    // sample test
    int binary_num[7] = {1,0,1,1,0,1,1};

    std::cout << "The binary number as an integer is: " << binary_to_int(binary_num, 7) << std::endl;
    return 0;
}