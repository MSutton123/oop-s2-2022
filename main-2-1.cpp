#include <iostream>

extern int print_binary_string(int);

int main() {

    // sample test
    int integer = 56;

    std::cout << "The number as binary is: " << print_binary_string(integer) << std::endl;
    return 0;
}