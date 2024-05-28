#include <iostream>
#include <cmath>
using namespace std;
short ReadDiameter()
{
   short  D;
   

   cout << "Enter the Diameter: " <<endl;
   cin >> D;

   return pow(D,2) ;
}
int main(void){
  
   float Area;

   
   Area = (ReadDiameter() * 3.14) / 4;
   printf("The Area of circle is %f\n",ceil(Area));


}