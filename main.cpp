#include <cassert>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  int specialArray(vector<int> &nums) {
    // FIXME
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
}

int main() {
  TestSpecialArray();
  std::cout << "Ok!" << std::endl;
  return 0;
}
