#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;

int main () {

  list<int> List = {100, 20, 80, 50, 60, 5};

  auto pos = List.begin();

  copy ( List.begin(), List.end(), ostream_iterator<int>( cout, "-->" ));
  cout << "X" << endl;
  List.sort();

  //copy ( List.begin(), List.end(), ostream_iterator<int>( cout, "-->" ));
  for (size_t i = 0; i < List.size(); i++) {
    // cout << List.at(i) << "-->";  // not working
  }


  cout << "X" << endl;

  cout << List.size() << endl;
  //cout << List.capacity() << endl;
  return 0;
}
