#include <iostream>

extern double copy_doubles(double[], double[], int);

int main() {
    int length = 5;

    double old_array[5] = {1.1,2.2,3.3,4.4,5.5};
    
    double new_array[5];

    copy_doubles(old_array, new_array, length);
    
    return 0;
}
 