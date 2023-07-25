
#include <cstdio>

using namespace std;
static int rat_things_power = 200;
// goto heap area?
// static object with global scope are allocated 
// when the program starts and deallocated when 
// program stops.

extern int extern_var = 500;

struct Book {
    char namee[256];
    int pages;
    static int price;
    static void getPrice() {
        price = 30;
    }
    // static int price = 30; error

};

int Book::price = 50;

// also can access by other files.

void power_up(int para) {
    int hit = 0;

    // both hit and para are allocated each time
    // power_up is invoked.
    // before power_up return, these variables are deallocated.
    // local variables

    /*
        local static variable  are declared at function scope
        when program exit, the variable end the life time.

    */

   static int local_static_var = 500;
   printf("local_static_var: %p\n", &local_static_var);
}

// A static object is declared using the static or extern keyword.


// static member


// Dynamic storage duration 
// allocated and deallocated request.
// with new expression

int main() {
    int local_rate = 1;
    extern_var = 500;
    power_up(10);
    printf("local_rate: %p\n", &local_rate);
    printf("rat_things_power: %p\n", &rat_things_power);
    printf("extern_var: %p\n", &extern_var);
    Book book1;
    book1.price = 530;
    printf("Book: %p\n", &(book1.price));

    int* my_int_ptr = new int{42};
    int* my_int_array_ptr = new int[100];
    //delete[] my_int_array_ptr;
    // memory leaks in which memory that is no longer needed
    // by the program is not released.
    // normally OS will clean up those things.
    // but kernel code will not clean up. (reboot)
    return 0;
}
/*
local_static_var: 0x555555558018
local_rate: 0x7fffffffdd74
rat_things_power: 0x555555558010
extern_var: 0x555555558014
*/
