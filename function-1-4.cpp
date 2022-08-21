#include <iostream>
#include <string>

void copy_doubles(double *old_array,double *new_array,int length) {
    for (int w = 0; w < length; w++) {
        *new_array++ = *old_array++;
    }
}