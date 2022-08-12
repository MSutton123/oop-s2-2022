#include <iostream>

extern int palindrome_sum(int[], int);

int main() {

    int array[8] = {1,2,3,4,4,3,2,1};
    int length = 8;
    std::cout << "What is the sum if the array is a palindrome?: "<< palindrome_sum(array, length) << std::endl;
    return 0;
}