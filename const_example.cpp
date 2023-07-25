#include <iostream>
using namespace std;

int main() {
  const int myNum = 15;
  myNum = 10;
  /*
   * const_example.cpp: In function ‘int main()’:
   * const_example.cpp:6:9: error: assignment of read-only variable ‘myNum’
   *     6 |   myNum = 10;
   *           |   ~~~~~~^~~~
   */
  cout << myNum;
  return 0;
}
