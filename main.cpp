#include <algorithm>
#include <cassert>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  int specialArray(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); ++i) {
      int x = nums.size() - i;
      auto iter = lower_bound(nums.begin(), nums.end(), x);
      if (distance(iter, nums.end()) == x) {
        return x;
      }
    }

    return -1;
  }
};

void TestSpecialArray() {
  Solution s;
  {
    vector<int> nums{3, 5};
    assert(2 == s.specialArray(nums));
  }
  {
    vector<int> nums{0, 0};
    assert(-1 == s.specialArray(nums));
  }
  {
    vector<int> nums{0, 4, 3, 0, 4};
    assert(3 == s.specialArray(nums));
  }
  {
    vector<int> nums{3, 6, 7, 7, 0};
    assert(-1 == s.specialArray(nums));
  }
}

int main() {
  TestSpecialArray();
  std::cout << "Ok!" << std::endl;
  return 0;
}
