#include <iostream>
#include <bitset>
#include <iterator>
#include <algorithm>
using namespace std;

int main () {

    bitset<4> records(0b1010);
    cout << records[0];
    cout << records[1];
    cout << records[2];
    cout << records[3] << endl;

    // construct 8 bits initialized to zero
    bitset<8> a2;

    // construct from a integer
    bitset<8> a1(177);

    cout << a1 << endl; // 0b10110001
    a1.reset();
    cout << a1 << endl;
    a1.set(4); // set 1 at position 4 (index start from 0 5th position)
    cout << a1 << endl;

    // construct from string
    bitset<8> bitset3(string("11111100"));
    bitset3.set();	
    cout << bitset3 << endl;
    bitset3.set(3, false);
    cout << bitset3 << endl;
    bitset3.set(3, true);
    return 0;
}