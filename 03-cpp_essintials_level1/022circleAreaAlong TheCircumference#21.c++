#include <iostream>
#include <cmath>
using namespace std;
short ReadCircumference()
{
   short  l;
   

   cout << "Enter the Circumference: " <<endl;
   cin >> l;

   return pow(l,2) ;
}

int main(void){
   
   float Area;

   
   Area = ReadCircumference() / (3.14*4);
   printf("The Area of circle is %f\n",floor(Area));


}