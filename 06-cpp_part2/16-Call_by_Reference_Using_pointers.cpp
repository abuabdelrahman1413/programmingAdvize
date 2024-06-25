#include <iostream> // This line includes the iostream header file, which provides input and output functionalities for the code.

using namespace std; // This line tells the compiler to use the std namespace, which contains standard objects and functions like cout and cin.

// Function to swap two integers by reference
void swap(int &n1, int &n2) {
  // Temporary variable to hold the value during the swap
  int temp;

  // Store the value of n1 in temp
  temp = n1;

  // Update the value of n1 with the value of n2
  n1 = n2;

  // Update the value of n2 with the value stored in temp (which was the original value of n1)
  n2 = temp;
}

// Function to swap two integers using pointers
void swapPointer(int *n1, int *n2) {
  // Temporary variable to hold the value during the swap
  int temp;

  // Dereference the pointers to access the actual integer values they point to and store the value pointed to by n1 in temp
  temp = *n1;

  // Update the value at the memory location pointed to by n1 with the value pointed to by n2 (effectively swapping the values)
  *n1 = *n2;

  // Update the value at the memory location pointed to by n2 with the value stored in temp (which was the original value pointed to by n1)
  *n2 = temp;
}

int main() {
  // Declare two integer variables a and b and initialize them with values 1 and 2 respectively
  int a = 1, b = 2;

  // Print a message before swapping
  cout << "Before swapping" << endl;

  // Print the values of a and b before swapping
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  // Call the swap function to swap the values of a and b by reference
  swap(a, b);

  // Print a message after swapping
  cout << "\nAfter swapping" << endl;

  // Print the values of a and b after swapping using the swap function
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  // Print a message before swapping using pointers
  cout << "\n\nswap using pointers" << endl;

  // Print the values of a and b before swapping using pointers
  cout << "\nBefore swapping" << endl;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  // Call the swapPointer function to swap the values of a and b using pointers
  swapPointer(&a, &b);  // Pass the addresses of a and b to the swapPointer function

  // Print a message after swapping using pointers
  cout << "\nAfter swapping" << endl;

  // Print the values of a and b after swapping using pointers
  cout << "a = " << a <<  endl;
  cout << "b = " << b << endl;

  // Return 0 to indicate successful program termination
  return 0;
}
