#include <iostream>
#include <string>

void string_2d_copy(std::string first[][2], std::string second[][2], int n) {
    
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < 2; k++) {
            second[i][k] = first[i][k];
        }
    }

    for (int j = 0; j < n; j++) {
        for (int h = 0; h < 2; h++) {
            std::cout << second[j][h] << " ";
        }
        std::cout << std::endl;
    }

}