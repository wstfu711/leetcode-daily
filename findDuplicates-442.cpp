class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> output = {0};
        sort(nums.begin(), nums.end());
        for(int i = 0 ; i < nums.size()-1 ; i++){
            if(nums[i] == nums[i+1]){
                if(nums[i] != output.back()){
                    output.push_back(nums[i]);
                }
            }
        }
        output.erase(output.begin());
        return output;
    }
};
