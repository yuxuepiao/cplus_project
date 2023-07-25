#include <iostream>
using namespace std;

int main() {

  int array1[10] = {0,1,2,3,4,5};

  for (int i = 0; i < 6; i++) {
    cout << array1[i] << " ";
  }
  cout << endl;

  for (auto eachElement : array1) {
    cout << eachElement << " ";
  }
  cout << endl;

  // directly operate on array1
  for(auto& eachReference : array1) {
    eachReference++;
  }
  for (auto eachElement : array1) {
    cout << eachElement << " ";
  }
  cout << endl;

}
