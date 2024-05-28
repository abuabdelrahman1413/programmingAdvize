#include <iostream>
using namespace std;
// piggy bank

struct stPiggyBankContents
{
    int Pennies, Nickles, Dimes, Quarters, Dollars;
};
stPiggyBankContents ReadPiggyBankContent(){
   stPiggyBankContents PiggyBankContents;
    cout << "Enter your Pennies? \n";
    cin >> PiggyBankContents.Pennies;
     cout << "Enter your Nickles? \n";
    cin >> PiggyBankContents.Nickles;
     cout << "Enter your Dimes? \n";
    cin >> PiggyBankContents.Dimes;
     cout << "Enter your Quarters? \n";
    cin >> PiggyBankContents.Quarters;
     cout << "Enter your Dollars? \n";
    cin >> PiggyBankContents.Dollars;

    return PiggyBankContents;
}

int CalculateTotalPennies(stPiggyBankContents PiggyBankContents)
{
    int Total_Pennies = 0;
    Total_Pennies = PiggyBankContents.Pennies*1 + PiggyBankContents.Nickles*5+PiggyBankContents.Dimes*10+PiggyBankContents.Quarters*25+PiggyBankContents.Dollars*100;
    return Total_Pennies;
}

int main() {
    int Total_Pennies = CalculateTotalPennies(ReadPiggyBankContent());
    cout <<"Total Pennies = " <<Total_Pennies<<endl;
    cout <<"Total Dollars = " <<Total_Pennies/100<<endl;
}
