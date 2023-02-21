class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        vector<int> ans;
        set<int> check;
        int a = 0;

        for(int i = 0 ; i < nums.size() ; ++i){
            if(check.count(nums[i]) == 0){
                ans.push_back(nums[i]);
                check.insert(nums[i]);
            }
            else{
                ans.erase(remove(ans.begin(), ans.end(), nums[i]), ans.end());
            }
        }

        a = ans[0];

        return a;
    }
};
