#include <iostream>
#include <string>
#include <list>
#include <map>
#include <vector>
#include <memory>
using namespace std;


class foo {
  int x_;
public:
  foo(int const x = 0) :x_{ x }{}
  int& get() {return x_;}

};


int main() {
  foo f(42);

  int& ret1 = f.get();
  cout << ret1 << endl;
  ret1 = 100;
  cout << ret1 << endl;

  auto x = f.get();
  x = 101;
  cout << f.get() << '\n';

  auto& y = f.get();
  y = 102;
  cout << f.get() << '\n';
  return 0;
}
