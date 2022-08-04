#include <iostream>

extern int sum_if_palindrome(int[], int);

int main() {

    // sample test
    int array[5] = {1,0,8,0,1};

    std::cout << "What is the sum of the array if it is a palindrome? " << sum_if_palindrome(array, 5)  << std::endl;
    return 0;
}