#include <iostream>

using namespace std;

void ReadArrayofGrades(float array[3]){
    cin >> array[0];
    cout << endl;
    cin >> array[1];
    cout << endl;
    cin >> array[2];
    cout << endl;
}
void Average(float array[3]){
    float Average = (array[0]+array[1]+array[2])/3;
    cout << Average << endl;
}

int main()
{
    float array[3];
    ReadArrayofGrades(array);
    Average(array);
}