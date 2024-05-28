#include <iostream>
using namespace std;
int main(void){
   unsigned short cashbid,totalbill,reminder; 
   cout << "Enter the cashbid: " <<endl;
   cin >> cashbid;
    cout << "Enter the totalbill: " <<endl;
   cin >> totalbill;
   reminder = cashbid - totalbill;
   cout << "The reminder " << reminder << endl; 

}