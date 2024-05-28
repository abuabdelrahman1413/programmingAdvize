#include <iostream>
using namespace std;

void ReadMark(float &mark)
{
    cout << "Enter your Mark: " << endl;
    cin >> mark;
    
}
void ChekMark(float mark)
{
    if (mark > 50)
    {
        cout << " Accepted" << endl;

    }
    else
        cout << " Rejected" << endl;
    
}
int main()
{
    float grade;
    ReadMark (grade);
    ChekMark(grade);
}
