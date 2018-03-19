#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> myvector;

  for (int i = 0; i < 5; i++) {
    myvector.push_back(i + 1);
  }

  cout << "size: " << myvector.size() << endl;

  cout << "back: " << myvector.back() << endl;

  myvector.pop_back();

  cout << "back: " << myvector.back() << endl;

  vector<int>::iterator it = myvector.begin();

  while (it != myvector.end()) {
    cout << *it << endl;
    it++;
  }

  while (!myvector.empty()) {
    cout << "top: " << myvector.back() << endl;
    myvector.pop_back();
  }

  cout << "size: " << myvector.size() << endl;

  for (int i = 0; i < 5; i++) {
    myvector.push_back(i + 1);
  }

  cout << "4: " << myvector[4] << endl;

  cout << "4: " << myvector.at(4) << endl;

  cout << "front: " << myvector.front() << endl;
  
  cout << "back: " << myvector.back() << endl;

  myvector[4] = 10;

  cout << "4: " << myvector.at(4) << endl;

  myvector.at(4) = 20;

  cout << "4: " << myvector.at(4) << endl;

  return 0;
}
