  #include <iostream>

extern int copy_integers(int[], int[], int);

int main() {
    int length = 5;

    int old_array[5] = {1,2,3,4,5};
    
    int new_array[5];

    copy_integers(old_array, new_array, length);
    
    return 0;
}
 