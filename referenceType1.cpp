#include <cstdio>
// this header was originally in the 
// C standard library as <stdio.h>

struct Book {
    char namee[256];
    int pages;

};
/*
struct Person {
    int age;
    int id;
} person1, person2, p[20];
*/
// Person1 and Person2 are struct Person variables.
// p[] is a struct Person array of size 20.

typedef struct Person {
    int age;
    int id;
} human;

int main() {
    human p1;
    int gettysburg{};
    printf("gettysburg: %d\n", gettysburg);
    // 64-bit (8bytes) address size
    int *gettysburg_address = &gettysburg;
    printf("gettysburg: %p\n", gettysburg_address);

    Book fiction;
    fiction.pages= 100;
    printf("%d\n", fiction.pages);

    return 0;
}