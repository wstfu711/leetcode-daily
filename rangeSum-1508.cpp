class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> v;
        int i = 0;
        while(i < n){
            int sum = 0;
            for(int j = i ; j < n ; j++){
                sum += nums[j];
                v.push_back(sum);
            }
            i++;
        }
        sort(v.begin() , v.end());
        int ans = 0;
        int MOD = 1000000007;
        for(int i = left - 1 ; i < right ; i++){
            ans = (ans + v[i]) % MOD;
        }
        return ans;
    }
};
