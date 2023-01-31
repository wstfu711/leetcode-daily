class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int pos = 1;
        for(int i = 0 ; i < nums.size()-1 ; ++i){
            if(nums[i] == nums[i + pos]){
                nums.erase(nums.begin() + i + pos);
                i--;
            }
        }
        return nums.size();
    }
};
