#include <iostream>
using namespace std;
struct grades
{
    float mark1;
    float mark2;
    float mark3;
};

void ReadMark(grades &mark)
{
    cout << "Enter your Mark1: " << endl;
    cin >> mark.mark1;
    cout << "Enter your Mark2: " << endl;
    cin >> mark.mark2;
    cout << "Enter your Mark3: " << endl;
    cin >> mark.mark3;
    
}
float CalcAverage(grades mark)
{
    return ((mark.mark1 + mark.mark2 + mark.mark3)/3);
}
void CheckAverage(grades mark)
{
    float Average = CalcAverage(mark);
    cout << Average << endl;
    if (Average > 50)
    {
        cout << " Accepted" << endl;

    }
    else
        cout << " Rejected" << endl;
    
}
int main()
{
    grades grade1;
    ReadMark (grade1);
   // CalcAverage(grade1);
    CheckAverage(grade1);
}
