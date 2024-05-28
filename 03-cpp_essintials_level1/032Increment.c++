#include <iostream>
using namespace std;
int main(void){
   short  a,b;
   a=10;
    b= a++;
   cout << "b ->a++ "<< b<<endl;
   cout << "a ->a++ "<< a<<endl;
   a=10;
   b=++a;
   cout << "b ->++a "<< b<<endl;
   cout << "a ->++a "<< a<<endl;


}