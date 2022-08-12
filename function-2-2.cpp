#include<math.h>

int bin_to_int(int binary_digits[], int number_of_digits) {
    int sum = 0;

    for (int i = 0; i < number_of_digits; i++) {
        int addition;
        addition = pow((i), (binary_digits[i]));
        sum += addition;
    }
    return sum;
}