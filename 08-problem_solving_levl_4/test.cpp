#include <iostream>
#include <string>

bool isLastMonth(short Month) { return Month == 12; }

int main() {
    int month = 12;
    std::cout << isLastMonth(month);
    return 0;
}