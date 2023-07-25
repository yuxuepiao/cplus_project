#include <cstdio>

int main(){
  unsigned short a = 0b10101010; // binary
  printf("%hu\n", a);
  int b = 0123; // octal 
  printf("%d\n", b);
  unsigned long long d = 0xFFFFFFFFFFFFFFFF;
  printf("%llu\n", d);
  printf("%b\n", 10);
}
