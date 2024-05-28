#include <iostream>
using namespace std;
// Read Until Age Between 18 and 25;
#include <iostream>
using  namespace std ;
//Age In Range 18 , 45
int ReadAge()
{
    int Age;
    cout <<"Please enter your Age?\n";
    cin >> Age;
    return Age;
}
bool ValidateNumberInRange(int Number , int From , int To)
{
    return (Number >= From && Number <= To);
}
int ReadUntilAgeBetween(int From, int To)
{
    int Age = 0;
    do {
      Age = ReadAge();
    } while (!ValidateNumberInRange(Age, From, To));
        return Age;
}
void PrintResult(int Age)
{
    cout << "Your Age is :" <<Age <<endl;
}
int main()
{
    PrintResult(ReadUntilAgeBetween(18,45));
    return 0;
}
