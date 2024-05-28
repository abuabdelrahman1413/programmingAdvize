#include <iostream>
using namespace std;
int main(void){
   unsigned short billValue;
   float   serviceFee,tax,totalBill; 
   cout << "Enter the Bill Value: " <<endl;
   cin >> billValue;
   serviceFee = (billValue/100)*10 ;
   tax = ((serviceFee + billValue) / 100)*16;
   totalBill = tax + serviceFee + billValue;


   cout << "Total Bill " << totalBill << endl; 

}