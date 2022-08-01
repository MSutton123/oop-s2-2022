#include<iostream>
int main() {

    // initialising number
    int number = 23;

    int numberAgain = number;

    // finding length
    int length = 0;

    while (numberAgain > 0) {

        int digit = numberAgain / 2;

        length += 1;

        numberAgain = digit;
    }

    int binarystring[length];

    for (int k = 0; k < length; k++) {
        int remainder = number % 2;

        int digit = number / 2;

        binarystring[k] = remainder;

        number = digit;
    }

   
    for (int i = length-1; i> -1; i--) {
        std::cout << binarystring[i] << std::endl;
    }
}