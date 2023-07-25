#include <iostream>
using namespace std;

int main() {
  cout << "Size of signed Boolean: " << sizeof(bool) << "byte" << endl;
  cout << "Size of signed char: " << sizeof(char) << "byte" << endl;
  cout << "Size of unsigned har: " << sizeof(unsigned char) << "byte" << endl;
  cout << "Size of short: " << sizeof(short int) << "byte" << endl;
  cout << "Size of unsigned short: " << sizeof(unsigned short int) << "byte" << endl;
  cout << "Size of int: " << sizeof(int) << "byte" << endl;
  cout << "Size of unsigned int: " << sizeof(int) << "byte" << endl;
  cout << "Size of long int: " << sizeof(long int) << "byte" << endl;
  cout << "Size of unsigned long int: " << sizeof(unsigned long int) << "byte" << endl;
  cout << "Size of long long int: " << sizeof(long long int) << "byte" << endl;
  cout << "Size of unsigned long long int: " << sizeof(unsigned long long int) << "byte" << endl;
  
  //cout << "Size of void: " << sizeof(void) << "byte" << endl;  // invalide operation
  cout << "Size of void*: " << sizeof(void*) << "byte" << endl;
  cout << "Size of double: " << sizeof(double) << "byte" << endl;
  cout << "Size of long double: " << sizeof(long double) << "byte" << endl;
  cout << "Size of float: " << sizeof(float) << "byte" << endl;
  return 0;
}

// 1 == sizeof(char) <= sizeof(short) <= sizeof(int) <= sizeof(long) <= sizeof(long long)
