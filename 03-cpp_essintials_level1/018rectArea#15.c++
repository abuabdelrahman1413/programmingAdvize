#include <iostream>
using namespace std;
short ReadDta ()
{
   short  A,B;
   cout << "Enter the A: " <<endl;
   cin >> A;
   cout << "Enter the B: " <<endl;
   cin >> B;
   return A*B;
}
int main(void){
   
   
   short Area = ReadDta();
   printf("The Area of rect is %d\n",Area);


}