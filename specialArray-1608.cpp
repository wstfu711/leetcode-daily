class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        for(int x = 0; x <= n; x++) {
            int i = lower_bound(nums.begin(), nums.end(), x) - nums.begin();
            int count = n - i;
            if(count == x){
                return x;
            }
        }
        return -1;
    }
};
