class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {        
        int mx = *max_element(begin(nums), end(nums));
        long long ans = 0;
        int l = 0, r = 0;
        int s =nums.size();
        while( r < s ){
            k = k - (nums[r++]==mx);
            while( k == 0 ){
                k = k + (nums[l++]==mx);
            }
            ans = ans + l;
        }
        return ans;
    }
};
