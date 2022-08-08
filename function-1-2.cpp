#include <iostream>
#include <string>

void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents) {
    
    // printing first line
    int var = 0;
    for (int i = 0; i < 5; i++) {
        if (i == 0) {
            std::cout << "Report Card" << ' ';
        }
        else if (i >= 1 && i <=3) {
            std::cout << courses[1+var] << ' ';
            var++;
        }
        else {
            std::cout << courses[4] << std::endl;
        }
    }

    for (int k = 0; k < nstudents; k++) {
        for (int a = 0; a < 5; a++) {
            if (a == 0) {
                std::cout << students[k] << ' ';
            }
            else {
                std::cout << report_card[k-1][a] << ' ';
            }
        }
        std::cout << std::endl;
    }

}