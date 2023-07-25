#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <set>
#include <cstdio>
#include <type_traits>

using namespace std;

class Solution {
public:

};

template<typename T>
T mean(const T* values, size_t length) {
    T result{};
    for(size_t i{}; i < length; i++) {
        result+=values[i];
    }

    return result / length;
}

float add(float a, int b) {
  return a + b;
}

float subtract(float a, int b) {
  return a - b;
}

int main() {
    // static_case<>();
    // reinterpret_cast<>();
    // const_cast

    //auto time = reinterpret_cast<const unsigned long*>(0x5500FF);
    // return-type (*pointer-name)(arg1,arg2,...);
    const double nums_d[] { 1.0, 2.0, 3.0, 4.0 };
    const auto result1 = mean(nums_d, 4); 
    const float first{ 100 };
    const int second{ 20 };
    printf("double: %f\n", result1);
    
    float(*operation)(float, int) {};

    printf("operation initialized to 0x%p\n", operation);

    operation = &add;
    printf("&add = 0x%p\n", operation);
    printf("%g + %d = %g\n", first, second, operation(first, second));
    
    // lambda expression

    /*
        1. captures
        2. parameters
        3. body
        4. specifiers
        5. return type
        [capture](parameters) specifiers -> return-type {body}
    */
    
    return 0;
}