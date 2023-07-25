#include <iostream>
#include <string>
#include <list>
#include <map>
#include <vector>
#include <memory>
using namespace std;

// to declare a function return type when you don't want to commit to a specific type
template <typename F, typename T>
auto apply(F&& f, T value) {
  return f(value);
}

auto func1(int const i) -> int {
  return 2 * i;
}

auto func2(int const i) {

  return 2*i;
}

int main() {

  // auto name = expression
  auto i = 42; // int
  auto d = 42.5; //double
  auto s = "text"; // char const *
  auto v = {1,2,3}; //std::initializer_list<int>

  // auto name = type-id { expression }
  auto b = new char[10]{0};           // char*
  auto s1 = std::string {"text"};     // std::string
  auto v1 = std::vector<int> {1,2,3}; // std::vector<int>
  auto p = std::make_shared<int>(42); // std::shared_ptr<int>

  // declare named lambda functions 
  // auto name = lambda-expression
  auto upper = [](char const c) {return toupper(c);};
  auto add = [](auto const a, auto const b) {return a+b;};
  
  std::map<int, std::string> m;
  for (std::map<int, std::string>::const_iterator it = m.cbegin(); it != m.cend(); ++it) {

  }

  for (auto it = m.cbegin(); it != m.cend(); ++it) {

  }

  int* t1 = new int(42);
  auto t2 = new int(53);
  

  // It is not possible to use auto for types that are not moveable
  // auto ai = std::atomic<int>(42); // error
  //
  // It is not possible to use auto for multi-word types 
  // long long,
  // long double,
  // struct foo
  //
  // auto l1 = long long{ 42 } // error
  // long long l1 = long long{ 42 }; // error
  
  using llong = long long;

  auto l2 = llong{ 42 }; 
  auto l3 = 32LL;
 /*
  * If you use the auto specifier but still need to know the type,
  * deduce it yourself from the initialization expression also searching through the code for function return types.
  */


}
