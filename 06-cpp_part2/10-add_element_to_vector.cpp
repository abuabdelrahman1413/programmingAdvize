
     #include <iostream>
     #include <vector> // Include the vector header
     using namespace std;


    //  int main() {
    //      std::vector<int> vNumbers;
    //      // ... rest of your code
    //      vNumbers.push_back(10);
    //      vNumbers.push_back(20);
    //      vNumbers.push_back(30);
    //      // ... rest of your code
    //      cout << "Number of elements in the vector: \n\n";
    //      for (int &vNumbers : vNumbers) {
    //          cout << vNumbers<< endl;
    //      }
    //      return 0;
    //  }


    // Home work

void ReadNumbers(vector <int> & vNumbers) // should pass by reference not like array
{
    int number;
    char Enter_number = 'Y';
    do
    {
         cout << "Enter a number: ";
           cin >> number;
        vNumbers.push_back(number);
        cout << "Do you want to enter another number? (y/n): ";
        cin >> Enter_number;
    }
    while (Enter_number == 'y' || Enter_number == 'Y');
}

void PrintVectorNumbers(vector <int> & vNumbers) // if you don't pass by reference you will get copy the vector to another variable
{
    for (int &vNumbers : vNumbers) {
        cout << vNumbers<< endl;
    }
}

int main()
{
    vector <int> vNumbers;
    ReadNumbers(vNumbers);
    cout << "Number of elements in the vector: \n\n";
    PrintVectorNumbers(vNumbers);
    return 0;
}

//