#include <iostream>
using namespace std;

void swapFunction (short &num1, short &num2)
{
   cout << "************************************************" << endl;
   short temp;
   temp = num2;
   num2 = num1;
   num1 = temp;

   cout << "After swap in swapFunction" << endl;
   printf("num1 is %i and the num2 is %i\n",num1,num2);
}

int main(void){
   short  num1,num2; 
   cout << "Enter the num1: " <<endl;
   cin >> num1;
   cout << "Enter the num2: " <<endl;
   cin >> num2;
   cout << "Befor swap " <<endl;
   printf("num1 is %i and the num2 is %i\n",num1,num2);

   swapFunction(num1, num2);
    
   cout << "After swap in main  " <<endl;
   printf("num1 is %i and the num2 is %i\n",num1,num2);
   return 0;
}