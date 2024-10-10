#include <iostream>
using namespace std;
void print_small_letters(){
    int i= 65;
    while ( i <= 90){
        cout << char(i) <<endl;
        i++;}
}
void print_capital_letters(){
    int i = 97;
    while ( i <= 122){
        cout << char(i) <<endl;
        i++;}
}
 int main ()
 {
    print_small_letters();
    cout << "******************"<<endl;
    print_capital_letters();
 }