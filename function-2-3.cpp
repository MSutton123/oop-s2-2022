#include <iostream>

bool is_array_palindrome(int integers[], int length) {
    int reverse[length];

    int question = 0;

    reverse[0] = integers[length-1];

    for (int i = 1; i < length; i++) {
        reverse[i] = integers[length-i-1];
    }

    for (int p = 0; p < length; p++) {
        if (integers[p] == reverse[p]) {
            question += 1;
        }
    }

    if (question == length) {
        return true;
    }
    else {
        return false;
    }
}

int sum_integers(int integers[], int length) {
    int sum = 0;

    for(int k = 0; k < length; k++) {
        sum += integers[k];
    }

    return sum;
}

int palindrome_sum(int integers[], int length) {
    
    if (length <= 0) {
        return -1;
    }
    if (is_array_palindrome(integers, length) == false) {
        return -2;
    }
    else {
        return sum_integers(integers, length);
    }
    
}