#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  void moveZeroes_iterator(vector<int>& nums) {
    if (nums.empty()) {
      return;
    }

    vector<int>::iterator it = nums.begin();
    int zeros = 0;
    int count = 0;
    int size = nums.size();

    while (it != nums.end() && (zeros + count) != size) {
      if (*it == 0) {
        nums.erase(it);
        nums.push_back(0);
        zeros++;
        continue;
      }
      count++;
      it++;
    }
  }
};

int main() {
  vector<int> nums = {4, 2, 4, 0, 0, 3, 0, 5, 1, 0};

  Solution solution;

  solution.moveZeroes_iterator(nums);

  vector<int>::iterator it = nums.begin();

  while (it != nums.end()) {
    cout << *it << " ";
    it++;
  }

  cout << endl;

  return 0;
}
