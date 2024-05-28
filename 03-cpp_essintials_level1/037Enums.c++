#include <iostream>
using namespace std;
enum color { Red, Green, Yellow, Blue };
enum Direction { North, South, East, West};
enum week { sat, sun, mon, tue, wed, thu, fri };
enum gender { male, female};
enum status { single, married};
int main()
{
    color myColor;
    Direction myDirection;
    week today;
    status myStatus;
    gender mygende;
    myColor = color::Yellow;
    cout << "My color is: " <<color::Blue<<endl; 
}