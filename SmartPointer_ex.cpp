#include <iostream>
#include <memory>
#include <utility>
using namespace std;

struct B {
    virtual ~B() = default;

    virtual void bar() {
        cout << "B::bar\n";
    }
};

struct D : B {
    D() {
        cout << "D::D\n";
    }

    ~D() {
        cout << "D::~D\n";
    }

    void bar() override {
        cout << "D::bar\n";
    }
};

int main() {
    /*
        unique_ptr is a smart pointer that owns and manages another
        object through a pointer and disposes of that object
        when the unique_ptr goes out of scope
    */
   // Create a resource
   std::unique_ptr<D> p = std::make_unique<D>();
   

    return 0;
}