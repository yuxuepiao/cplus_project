#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
  
  set<int> set1 = {1,3,5,7,9};
  set<int> set2 = {2,3,7,8,10};

  vector<int> diff_set(set1.size() + set2.size());


  for (auto it = set1.begin(); it != set1.end(); it++) {
    cout << *it << ' ';
  }

  cout << endl;

  return 0;
}
