#include <iostream>
#include <string>

void copy_integers(int old_array[],int new_array[],int length) {
    int* pointer_new = new_array;
    int* pointer_old = old_array;

    for (int w = 0; w < length; w++) {
        *pointer_new++ = *pointer_old++;

    }
}