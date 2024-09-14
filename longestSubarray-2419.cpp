#include <vector>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans = 0;
        int max = 0;
        int curr = 0;
        for(int num : nums){
            if (num > max) {
                max = num;
            }
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == max){
                curr++;
                if(curr > ans) ans = curr;
            }
            else{
                curr = 0;
            }
        }

        return ans;
    }
};
