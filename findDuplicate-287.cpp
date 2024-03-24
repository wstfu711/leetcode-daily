class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int output = 0;
        for(int i = 0 ; i < nums.size()-1 ; i++){
            if(nums[i] == nums[i+1]){
                output = nums[i];
                break;
            }
        }
        return output;
    }
};
