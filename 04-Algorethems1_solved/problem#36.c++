#include <iostream>
#include <locale>
#include <ratio>
using namespace std;
// simple Calculater
enum enOperationType {Add = '+', Subtract = '-', Multiply = '*' , Divide = '/'};
float ReadNumber(string Message) {
    float Number;
    cout <<Message;
    cin >>Number;
    return Number;
}
enOperationType ReadOpType(string messages) {
    char opt = '+';
    cout <<messages<<endl;
    cin >> opt;
    return (enOperationType)opt;
}
float Calculate(float Number1, float Number2,enOperationType OpType ){
    switch (OpType) {
        case enOperationType::Add:
            return Number1+Number2; // we didn't but break because return quit function
        case enOperationType::Subtract:
            return Number1-Number2;
        case enOperationType::Multiply:
            return Number1*Number2;
        case enOperationType::Divide:
            return Number1/Number2;
        default:
            return -1 ;
    }

}




int main()
{
    float Number1 = ReadNumber("Please Enter The First Number: \n");
    float Number2 = ReadNumber("Please Enter The Second Number: \n");
    enOperationType OpType = ReadOpType("Pleasr enter Operation (+ , - , * , /)?");
    float Result = Calculate(Number1,Number2,OpType);
    cout << endl << "Result = " <<Result <<endl;
}
