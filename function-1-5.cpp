#include <iostream>

void print_summed(int array1[3][3],int array2[3][3]) {

    // initialising
    int array_sum[3][3] = {{0,0,0},{0,0,0},{0,0,0}};


    // arrays must have the same number of columns and rows
    for (int i = 0; i < 3; i++) {
        for (int k = 0; k < 3; k++) {
            array_sum[i][k] += array1[i][k];
            array_sum[i][k] += array2[i][k];

            std::cout << array_sum[i][k] << " " ;
        }
        std::cout << std::endl;
    }

}