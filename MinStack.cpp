#include <iostream>
#include <stack>

using namespace std;

class MinStack {
 public:
  int min;
  /** initialize your data structure here. */
  MinStack() {}

  void push(int x) {
    /**
     * we use s1 to store values and use s2 to store the mins
     */
    if (s1.size() == 0) {
      // empty stack, the first element will be the min
      s1.push(x);
      s2.push(x);
    } else {
      // non-empty stack
      int currentMin = s2.top() < x ? s2.top() : x;
      s1.push(x);
      s2.push(currentMin);
    }
  }

  void pop() {
    if (s1.size() >= 1) {
      s1.pop();
      s2.pop();
    }
  }

  int top() { return s1.top(); }

  int getMin() { return s2.top(); }

 private:
  stack<int> s1;
  stack<int> s2;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */

int main() {
  MinStack obj;
  obj.push(1);
  obj.push(2);
  obj.push(3);
  obj.pop();
  cout << "top is: " << obj.top() << endl;
  cout << "min is: " << obj.getMin() << endl;
}
