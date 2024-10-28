class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_map<int, int> um;
        for(int i : nums){
            int n = sqrt(i);
            if (n * n == i && um.find(n) != um.end()) um[i] = um[n] + 1;
            else um[i] = 1;
        }
        int ans = INT_MIN;
        for (const auto& pair : um) {
            ans = std::max(ans, pair.second);
        }
        if(ans == 1) return -1;
        return ans;
    }
};
