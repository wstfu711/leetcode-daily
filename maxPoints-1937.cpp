class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {
        int n = points[0].size();
        vector<long long> dp(n, 0);
        for(int i = 0 ; i < points[0].size() ; i++){
            dp[i] = points[0][i];
        }
        for (int i = 1; i < points.size(); ++i) {
            vector<long long> leftMax(n, 0), rightMax(n, 0);
            vector<long long> new_dp(n, 0);
            leftMax[0] = dp[0];
            for (int j = 1; j < n; ++j) {
                leftMax[j] = max(leftMax[j - 1], dp[j] + j);
            }
            rightMax[n - 1] = dp[n - 1] - (n - 1);
            for (int j = n - 2; j >= 0; --j) {
                rightMax[j] = max(rightMax[j + 1], dp[j] - j);
            }
            for (int j = 0; j < n; ++j) {
                new_dp[j] = points[i][j] + max(leftMax[j] - j, rightMax[j] + j);
            }
            dp = new_dp;
        }
        return *max_element(dp.begin(), dp.end());
    }
};
