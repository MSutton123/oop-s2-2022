#include <iostream>

extern int bin_to_int(int[], int);

int main() {

    int array[6] = {1,0,1,1,0,1};
    int length = 6;
    std::cout << bin_to_int(array, length) << std::endl;
    return 0;
}