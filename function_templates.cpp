#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

template <typename T, int size>
void sort(T input[]) {
 for (int i = 0; i < size; i++) {
   for (int j = 0; j < size; j++) {
     if (input[i] < input[j]) {
      swap(input[i], input[j]);
     }
   }
 }

}


int main() {
  int a[10] = { 100, 10, 40, 20, 60, 80, 5, 50, 30, 25 };

  copy ( a, a+sizeof(a)/sizeof(a[0]), ostream_iterator<int>( cout, "\t" ) );

  cout << endl;

  sort<int, sizeof(a)/sizeof(int)>(a);
  
  copy ( a, a+sizeof(a)/sizeof(a[0]), ostream_iterator<int>( cout, "\t" ) );
  
  cout << endl;

  string names[6] = {
                 "Rishi Kumar Sahay",
                 "Arun KR",
                 "Arun CR",
                 "Ninad",
                 "Pankaj",
                 "Nikita"
          };

  cout << "\nNames before sorting ..." << endl;
  copy ( names, names+6, ostream_iterator<string>( cout, "\n" ) );
  cout << endl;
  sort<string, 6>( names );

  cout << "\nNames after sorting ..." << endl;
  copy ( names, names+6, ostream_iterator<string>( cout, "\n" ) );
  cout << endl;

  return 0;
}
