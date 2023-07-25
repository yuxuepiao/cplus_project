#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

class MyCircularQueue {
private:
    vector<int> records;
    int headIndex;
    int count;
    int size;
public:


    MyCircularQueue(int k) {
        records.resize(k);

        count = 0;

        size = k;

        headIndex = 0;

    }
    
    bool enQueue(int value) {
        if (isFull()) {
            return false;
        }
        records[(headIndex + count) % size] = value;
        count++;
        return true;
        
    }
    
    bool deQueue() {
        if (isEmpty()) {
            return false;
        }
        headIndex = (headIndex + 1) % size;
        count--;
        return true;
        
    }
    
    int Front() {
        if (isEmpty()) {
            return -1;
        }

        return records[headIndex];
        
    }
    
    int Rear() {
        if (isEmpty()) {
            return -1;
        }
        return records[(headIndex + count - 1) % size];
    }
    
    bool isEmpty() {
        return count == 0;
    }
    
    bool isFull() {
        return count == size;
    }
};

int main() {
    MyCircularQueue m(3);

    cout << m.enQueue(1) << ',';
    cout << m.enQueue(2) << ',';
    cout << m.enQueue(3) << ',';
    cout << m.enQueue(4) << ','; // Fasle
    cout << m.Rear() << ','; // 3
    cout << m.isFull() << ','; // True
    cout << m.deQueue() << ',';
    cout << m.enQueue(4) << ','; // True
    cout << m.Rear(); // 4
    cout << endl;

    return 0;    
}

/*
int main(int nArgs, char ** vArgs)
{
    vector<int> *v = new vector<int>(10);
    v->at(2); //Retrieve using pointer to member
    v->operator[](2); //Retrieve using pointer to operator member
    v->size(); //Retrieve size
    vector<int> &vr = *v; //Create a reference
    vr[2]; //Normal access through reference
    delete &vr; //Delete the reference. You could do the same with
                //a pointer (but not both!)
}
*/