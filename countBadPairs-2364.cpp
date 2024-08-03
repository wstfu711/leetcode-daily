class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long ans = 0;
        unordered_map<int, int> um;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            int diff = nums[i] - i;
            if (um.find(diff) != um.end()) {
                ans += um[diff];
            }
            um[diff]++;
        }
        long long all = static_cast<long long>(n) * (n - 1) / 2;
        return all - ans;
    }
};
