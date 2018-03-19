#include <iostream>

using namespace std;

class Solution {
 public:
  int hammingDistance(int x, int y) {
    int temp = x ^ y;
    int count = 0;

    for (int i = 0; i < 32; i++) {
      if (temp & 1) {
        count++;
      }
      temp = temp >> 1;
    }

    return count;
  }
};

int main() {
  Solution solution;

  cout << "Hamming Distance: " << solution.hammingDistance(4, 5) << endl;

  return 0;
}
