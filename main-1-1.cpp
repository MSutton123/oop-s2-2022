#include <iostream>

extern char string_2d_copy(std::string[][2], std::string[][2], int);

int main() {
    
    std::string first[3][2] = {{"a", "b"},{"c", "d"},{"e", "f"}};
    std::string second[3][2];
    int n = 3;

    string_2d_copy(first, second, n);
    
    return 0;
}
 