#include <iostream>
using namespace std;
#include <cmath>
float AreaOfCircle(){
    float a,b;
   float Area;
     //داخل مثلث متساوي الساقين
   cout << "Enter a : " <<endl;
   cin >> a;
   cout << "Enter b : " <<endl;
   cin >> b;
   Area =  (3.14*b*b/4) * ((2*a-b)/(2*a+b));
   return Area;
}

int main(void){
   
  
   
   printf("The Area of circle is: ");
   cout << floor(AreaOfCircle()) << endl;

   //whenn i declear a and b as short the Area is always 0?

    return 0;
}