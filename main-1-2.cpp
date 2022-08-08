#include <iostream>
#include <string>

extern int print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents);

int main() {

    // sample test
    int nstudents = 3;
    std::string courses[4] = {"Matt","English","Science","Physics"};
    std::string students[3] = {"Billy","Bob","Gertrude"};
    int report_card[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    print_class(courses, students, report_card, nstudents);
    
    return 0;
}