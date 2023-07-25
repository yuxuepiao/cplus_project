#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <iterator>
using namespace std;

void printVector(vector<int>* results) {
    for (auto i : *results) {
        cout << i << ' ';
    }

    cout << endl;

}

int main () {
  vector<int> v1;

  vector<int> v2 {5,6,7};

  // initializa from a count and value
  // {1,2,3,4,5}
  vector<int> v5(5,1);
  // to create a vector with five elements
  vector<int> v3 (5);
  
  list<int> l1 {1,2,3,4,5};
  vector<int> v4 (l1.begin(), l1.end());

  int intArray[3]; // statically allocated array
  int* arr = new int[5];

  cout << &intArray << endl;
  cout << arr << endl;
  /*
  0x7fffffffdd3c  stack area?
  0x55555556bef0  heap area?
  */

  std::vector<int> v6{ 1, 1, 2, 3, 5, 8, 13 };
  cout << "After:" << endl;
  cout << v6[-1] << endl;
  v6.push_back(6);
  v6.pop_back();
  // emplace_back()
  // emplace()

  // find value 3
  auto it = find(v6.cbegin(), v6.cend(), 3);

  if (it != v6.end()) {
    cout << *it << '\n';
  }

  sort(v6.begin(), v6.end(), std::greater<>());
  printVector(&v6);
  return 0;
}
