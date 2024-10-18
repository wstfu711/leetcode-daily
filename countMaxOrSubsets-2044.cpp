#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int maxOr = 0;
        for (int num : nums) {
            maxOr |= num;
        }
        int count = 0;
        function<void(int, int)> backtrack = [&](int idx, int currentOr) {
            if (currentOr == maxOr) {
                count += 1 << (nums.size() - idx);
                return;
            }

            if (idx == nums.size()) {
                return;
            }
            backtrack(idx + 1, currentOr | nums[idx]);
            backtrack(idx + 1, currentOr);
        };
        backtrack(0, 0);
        
        return count;
    }
};
