class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0 ; i < nums.size() - 1; i++){
            if(nums[i] == nums[i+1]){
                ans = nums[i];
                break;
            }
        }
        return ans;
    }
};