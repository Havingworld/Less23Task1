#include <iostream>

#define MON 1
#define TUE 2
#define WED 3
#define THU 4
#define FRI 5
#define SAT 6
#define SUN 7
#define DAY1    MONDAY
#define DAY2    TUESDAY
#define DAY3    WEDNESDAY
#define DAY4    THRUSDAY
#define DAY5    FRIDAY
#define DAY6    SATURDAY
#define DAY7    SUNDAY

#define CONCAT(a, b) a ## b
#define EXPAND(x) CONCAT(DAY, x)
#define STR(str) #str
#define STRING(str) STR(str)

int main() {
    int nInpt{3};
    std::cout << "Enter the day of the week (1-7): ";
    std::cin >> nInpt;
    //костылькоддинг, дай мне силу!!!
    if (nInpt == 1) {
        std::cout << "The day of the week is: " << STRING(EXPAND(MON)) << std::endl;
    }
    else if(nInpt == 2){
        std::cout << "The day of the week is: " << STRING(EXPAND(TUE)) << std::endl;
    }
    else if (nInpt == 3) {
        std::cout << "The day of the week is: " << STRING(EXPAND(WED)) << std::endl;
    }
    else if (nInpt == 4) {
        std::cout << "The day of the week is: " << STRING(EXPAND(THU)) << std::endl;
    }
    else if (nInpt == 5) {
        std::cout << "The day of the week is: " << STRING(EXPAND(FRI)) << std::endl;
    }
    else if (nInpt == 6) {
        std::cout << "The day of the week is: " << STRING(EXPAND(SAT)) << std::endl;
    }
    else if (nInpt == 7) {
        std::cout << "The day of the week is: " << STRING(EXPAND(SUN)) << std::endl;
    }
    else {
        std::cout << "Incorrect input" << std::endl;
    }
    

    return 0;
} 