#include <iostream>
#include <string>

using namespace std;

int main() {
  string greeting = "Hello";
  string cheese;
  string roadAssistance(3, 'A');

  
  cout << greeting << endl;
  cout << cheese.empty() << endl;
  cout << roadAssistance << endl;
  //  == operator in string returns true if the contents
  // are equivalent.

  greeting.append("World");
  cout << greeting << endl;

  string word("substitution");
  word.replace(word.begin()+9, word.end(), "e");

  cout << word << endl;

  string word1("hobbits");

  cout << word1.substr(3) << endl;
  cout << word1.substr(3, 3) << endl;

  cout << word1.find("bb") << endl;
  cout << word1.find("x") << endl;
  cout << std::string::npos << endl;

  cout << std::to_string(123) << endl;


  // raw string literals
  printf( R"(she  is "OK" \n)");

  return 0;
}
