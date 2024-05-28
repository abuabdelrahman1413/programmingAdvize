#include <iostream>
using namespace std;
int main(void){
   short num1, num2, num3; 
   cout << "Enter the num: " <<endl;
   cin >> num1 ;
   cout << "Enter the num: " <<endl;
   cin >> num2 ;
   cout << "Enter the num: " <<endl;
   cin >> num3 ;
   short total = num2+num1+num3;
   cout << num1  << " " << '+' <<endl;
   cout << num2  << " " << '+' <<endl;
   cout << num3 <<endl;
   cout << "_________________" << endl <<endl;
   cout << "Total = " << total <<endl;  
}