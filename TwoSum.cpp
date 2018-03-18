#include <iostream>
#include <map>
#include <vector>

using namespace std;

/**
 * Solution for problem "1. Two Sum"
 */
class Solution {
 public:
  vector<int> twoSum_brute_force(vector<int> &nums, int target) {
    vector<int> result;
    int size = nums.size();

    for (int i = 0; i < size; i++) {
      for (int j = i + 1; j < size; j++) {
        if (nums[i] + nums[j] == target) {
          result.push_back(i);
          result.push_back(j);
          return result;
        }
      }
    }

    return result;
  }
  vector<int> twoSum(vector<int> &nums, int target) {
    map<int, int> temp;
    vector<int> result;
    int size = nums.size();

    for (int i = 0; i < size; i++) {
      map<int, int>::iterator key = temp.find(target - nums[i]);
      if (key != temp.end()) {
        // key [target - nums[i]] exists
        result.push_back(i);
        result.push_back(key->second);
        return result;
      } else {
        temp[nums[i]] = i;
      }
    }

    return result;
  }
};

int main() {
  int test[] = {1, 2, 3, 4, 5, 6, 7};
  int size = sizeof(test) / sizeof(int);
  vector<int> array;
  for (int i = 0; i < size; i++) {
    array.push_back(test[i]);
  }
  Solution solution;
  vector<int> result = solution.twoSum(array, 13);
  return 0;
}
