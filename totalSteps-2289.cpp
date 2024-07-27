class Solution {
public:
    int totalSteps(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, 0);
        stack<int> st;
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            int maxSteps = 0;
            while (!st.empty() && nums[st.top()] <= nums[i]) {
                maxSteps = max(maxSteps, dp[st.top()]);
                st.pop();
            }
            if (!st.empty()) {
                dp[i] = maxSteps + 1;
            }
            st.push(i);
            ans = max(ans, dp[i]);
        }

        return ans;
    }
};
