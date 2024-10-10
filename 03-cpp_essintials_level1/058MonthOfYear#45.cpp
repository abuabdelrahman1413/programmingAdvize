#include <iostream>
using namespace std;
enum en

int main()
{
    int month ;

    cout << "Enter The Month Number: " << endl;
    cin >> month;

    if (month == 1)
        cout << ("Jan\n");
    else if (month == 2)
    {
      cout << ("Feb\n"); 
    }
    else if (month == 3)
    {
        cout << ("March\n");
    }
    else if (month == 4)
    {
        cout << ("Apr\n");
    }
    
    else if (month == 5)
    {
       cout << ("May\n");
    }
    else if (month == 6)
    {
        cout << ("Jun\n");
    }
    else if (month == 7)
    {
        cout << ("Jul\n");
    }
    else if (month == 8)
    {
        cout << ("Aug\n");
    }
    else if (month == 9)
    {
        cout << ("Sep\n");
    }
    else if (month == 10)
    {
        cout << ("Oct\n");
    }
    else if (month ==11)
    {
        cout << ("Nov\n");
    }
    else if (month == 12)
    {
        cout << ("Dec\n");
    }
    
    else 
        cout << ("Invalid Month\n");

}