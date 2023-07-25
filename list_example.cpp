#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;

int main () {
  list<int> List;

  for(int count = 0 ; count < 5; ++count) {
    List.push_back((count+1) * 100);
  }

  auto pos = List.begin();

  while (pos != List.end()) {
    cout << *pos++ << "-->";
  }

  cout << endl;

  return 0;
}
