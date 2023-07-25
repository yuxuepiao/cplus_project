#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare_as_ints(double i, double j){
  return (int(i) < int(j));
}


/*
 * Sorts the elements in the range [first, last) into ascending order, like sort, but stable_sort preserves the 
 * relative order of the elements with equivalent values. N * log2(N)
 *
 * result : the Objects in the range[First, last) are modified.
 */


int main() {
  int arr[] = {1,5,8,9,6,7,3,4,2,0};
  int n = sizeof(arr) / sizeof(arr[0]);
  stable_sort(arr, arr + n);

  cout << "After sort: \n";

  for (int i = 0 ; i < n; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;

  return 0;
}
