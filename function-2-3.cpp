#include <iostream>

bool is_palindrome(int integers[], int length) {

    int copyRev[length];

    for (int i = 0; i < length; i++) {
        copyRev[i] = integers[length-i-1];
    }

    int is_pali = 0;

    for (int i = 0; i < length; i++) {
        if (copyRev[i] != integers[i]) {
            is_pali += 1;
            break;
        }
    }

    if (is_pali == 0) {
        return true;
    }
    else {
        return false;
    }

}

int sum_array_elements(int integers[], int length) {
    int sum = 0;

    for (int j = 0; j < length; j++) {
        sum += integers[j];
    }

    return sum;

}

int sum_if_palindrome(int integers[], int length) {
    
    if (length >= 1) {
        if (is_palindrome(integers, length) == true) {
            return sum_array_elements(integers, length);
        }
        else {
            return -2;
        }
    }
    else {
        return -1;
    }
}