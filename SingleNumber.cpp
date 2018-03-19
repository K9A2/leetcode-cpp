#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  int singleNumber(vector<int>& nums) {
    for (int i = 1; i < (int)nums.size(); i++) {
      nums[0] ^= nums[i];
    }
    return nums[0];
  }
};

int main() {
  vector<int> testCase = {1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  Solution solution;

  cout << "result: " << solution.singleNumber(testCase) << endl;

  return 0;
}
