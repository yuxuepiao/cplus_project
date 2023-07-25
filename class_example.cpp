#include <iostream>
using namespace std;

class Vectors{

public:
  Vectors(int s):elem { new double[s]}, size{s} {} // constructor
  
  double* elem;
  int size;
};

int main() {

  Vectors v1(5);
  cout << &v1 << endl; //0x7fffffffdd40
  cout << &(v1.size) << endl;
  cout << (v1.elem) << endl;
  cout << "v1 memory address" <<endl;
  Vectors* v2 = new Vectors(6);
  cout << v2 << endl; //0x55555556b2f0
  cout << &(v2->size) << endl;
  cout << (v2->elem) << endl;
  return 0;


}
