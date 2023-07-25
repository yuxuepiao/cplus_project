#include <iostream>
#include <string>
#include <memory>
#include <sstream>
using namespace std;

class MyClass {
  private:
    static int count;
    string name;

  public:
    MyClass() {
      ostringstream stringStream(ostringstream::ate);
      stringStream << "Object";
      stringStream << ++count;
      name = stringStream.str();
      cout << "\nMyClass Default constructor - " << name << endl;
    }
    ~MyClass() {
      cout << "\nMyClass destructor - " << name << endl;
    }

    MyClass ( const MyClass &objectBeingCopied ) {
      cout << "\nMyClass copy constructor" << endl;
    }

    MyClass& operator = ( const MyClass &objectBeingAssigned ) {
      cout << "\nMyClass assignment operator" << endl;
      return *this;
    }

    void sayHello() {
      cout << "Hello from MyClass " << name << endl;
    }
};

int MyClass::count = 0;

int main() {
  MyClass *ptr1 = new MyClass();
  MyClass *ptr2 = new MyClass();
  MyClass local; // it is local variable, so the destructor 
                 // will call automatically.
  local.sayHello();
  return 0;
}
