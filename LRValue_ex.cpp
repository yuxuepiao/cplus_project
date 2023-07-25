#include <cstdio>
#include <utility>

void ref_type(int &x) {
    printf("L value reference %d\n", x);
}

void ref_type(int &&x) {
    printf("R value referece %d\n", x);
}

/*
lvalue is any value that has a name,
rvalue is anything tht is not an lvalue.
*/

// cast an lvalue reference to an rvalue reference
// using std::move <utility>

/* Compiler - Generated Methods
The destructor
The copy constructor
The move constructor
The copy assignment operator
The move assignment operator

*/

int main() {
    auto x = 1;
    ref_type(x);
    ref_type(2);
    ref_type(x + 2);
    ref_type(std::move(x));
}