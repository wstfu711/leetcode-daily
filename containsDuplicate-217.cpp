class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> nums2;
        bool ans = false;
        for(int i = 0 ; i < nums.size() ; ++i){
            if(nums2.count(nums[i]) == 1){
                ans = true;
                break;
            }
            else{
                nums2.insert(nums[i]);
            }
        }
        return ans;
    }
};
