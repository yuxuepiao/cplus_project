#include <iostream>
#include <string>
#include <list>
#include <map>
#include <vector>
#include <memory>
using namespace std;

class foo {

  int a_;
  double b_;
public:
  foo():a_(0), b_(0) {}
  foo(int a, double b = 0.0):a_(a), b_(b) {}
};

struct bar {
  int a;
  double b;
};

int main() {
  using byte = unsigned char;
  using byte_ptr = unsigned char *;
  using fn = void(byte, double);

  // fn* f = func
  
  bar b{42, 1.2};

  foo f1{};
  foo f2{42, 1.2};
  foo f3{52};
  // standard containers
  vector<int> v {1,2,3};
  map<int, string> m { {1, "one"}, { 2, "two"}};

  // dynamically allocated arrays
  int* arr2 = new int[3] {1,2,3};

  int arr1[3] {1,2,3};

  // built-in types
  int i { 42 };
  double d {1.2};

}
