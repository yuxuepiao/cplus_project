#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {
  string s {"Hello World!"};

  list<string> words {"I go to school", "Come on", "Have a good day."};

  for (auto each : words) {

    cout << each << endl;
  }

  cout << endl;

  return 0;
  
}
