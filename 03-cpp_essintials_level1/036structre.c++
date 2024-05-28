#include <iostream>
using namespace std;
struct stAddress
{
    string street;
    string POBOX;
};

struct stOwner
{
    string name;
    string phone;
    stAddress address;
};
struct car
{
    string model;
    string brand;
    short year;
    stOwner owner;
};
int main(){
    car myCar;
    myCar.brand = "BMW";
    myCar.model = "XS";
    myCar.year = 2000;
    myCar.owner.name = " Mohammed ";
    myCar.owner.phone = "0118118620";
    myCar.owner.address.street = "Al-Qubba";
    myCar.owner.address.POBOX = "249";
    

    cout << myCar.brand << " " << myCar.model << " " << myCar.year << myCar.owner.name
    << " " << myCar.owner.phone << " "<< "\n";
    cout << myCar.owner.address.street << " " << myCar.owner.address.POBOX << endl;
    cout << sizeof(car) << endl;
}
