class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        for(int i = 0 ; i < nums.size() - 1 ; ++i){
            if(nums[i] == nums[i+1]){
                while(nums[i] == nums[i+1]){
                    i++;
                    if(i == nums.size()-1){
                        break;
                    }
                }
            }
            else{
                ans.push_back(nums[i]);
            }
        }
        if(nums[nums.size() - 1] != nums[nums.size() - 2]){
            ans.push_back(nums[nums.size() - 1]);
        }

        return ans;
    }
};
