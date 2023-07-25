#include <iostream>
#include <queue>
#include <iterator>
#include <algorithm>
using namespace std;

int main () {
  priority_queue<int> q1; // max priority queue
  priority_queue<int, vector<int>, greater<int>> q2;
  priority_queue<int, vector<int>, less<int>> q3;
  priority_queue<string, vector<string>, greater<string> > pqString;
  
  q1.push(100);
  q1.push(200);
  q1.push(300);

  while (! q1.empty()) {
    cout << q1.top() << endl;
    q1.pop();
  }

    q2.push(100);
    q2.push(200);
    q2.push(300);

    while (! q2.empty()) {
        cout << q2.top() << endl;
        q2.pop();
    }

    q3.push(100);
    q3.push(200);
    q3.push(300);

    while (! q3.empty()) {
        cout << q3.top() << endl;
        q3.pop();
    }

  return 0;
}