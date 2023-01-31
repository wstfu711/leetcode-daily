class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans = 0;
        for(int i = 0 ; i < nums.size() ; ++i){
            if(nums[i] > target || nums[i] == target){
                ans = i;
                break;
            }
            if(i == nums.size() - 1){
                ans = nums.size();
            }
        }
        return ans;
    }
};
