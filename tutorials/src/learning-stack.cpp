#include <iostream>
#include <stack>

using namespace std;

int main() {
  stack<int> mystack;

  mystack.push(1);
  mystack.push(2);
  mystack.push(3);
  mystack.push(4);

  cout << "size: " << mystack.size() << endl;

  while (!mystack.empty()) {
    cout << mystack.top() << endl;
    mystack.pop();
  }

  return 0;
}
