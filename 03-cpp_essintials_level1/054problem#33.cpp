#include <iostream>
using namespace std;

int main()
{
    short Grade;

    cout << "Enter your Grade: " << endl;
    cin >> Grade;

    if (Grade >= 90)
        cout << "Excellant\n";
    else if (Grade >= 80)
    {
      cout << "Very Good\n";  
    }
    else if (Grade >= 70)
    {
        cout << "Good\n";
    }
    else if (Grade >= 60)
    {
        cout << "Accepted\n";
    }
    
    else if (Grade >= 50)
    {
      cout << "Weak\n";
    }
    else
    {
       cout << "Fail\n";
    }
 
}