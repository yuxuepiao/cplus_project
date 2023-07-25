#include <iostream>
#include <array>

using namespace std;

int main() {

  int myNumbers[5] = {10,20,30,40,50};
  int array1[] = {1,2,3,4,5};

  int size = sizeof(myNumbers);

  int lengthOfArray = sizeof(myNumbers) / sizeof(myNumbers[0]);

   // access each element.
  array1[2] = 100;
  for (auto e : array1) {
   cout << e << ' ';
  }

  cout << endl;

  cout << "size of array: " << size << endl;
  
  cout << "length of array: "<< lengthOfArray << endl;
  
  for (int value : myNumbers) {
     cout << value << " ";
  }

  cout << endl;
   // check for index type?
  for (size_t i =0 ; i < lengthOfArray; i++) {
     cout << myNumbers[i] << " ";
  }

  cout << endl;

   array<int, 3> myarray {10,20,30};
   // vector <int> vc(5,1); size of 5 with values 1
   /*
      vector <int> v(5);
      fill(v.begin(),v.end(),1);
   */

   for(int i = 0; i < myarray.size(); i++) {
      cout << myarray[i] << ' ';
   }
   cout << endl;


  return 0;
}
