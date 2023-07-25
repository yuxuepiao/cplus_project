#include <cstdio>

struct Tracer {
  Tracer(const char* name) : name{ name } {
    printf("%s constructed.\n", name); 
  }
  ~Tracer() {
    printf("%s destructed.\n", name); 
  }
private:
  const char* const name;
};

static Tracer t1{ "Static variable" }; 
// what is thread_local ?
thread_local Tracer t2{ "Thread-local variable" }; 

int main() {
    const auto t2_ptr = &t2;
    printf("A\n"); 
    Tracer t3{ "Automatic variable" }; 
    printf("B\n");
    const auto* t4 = new Tracer{ "Dynamic variable" };
    printf("C\n");
    delete t4;
}