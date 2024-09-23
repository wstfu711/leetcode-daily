class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        int n = s.size();
        unordered_set<string> dict(dictionary.begin(), dictionary.end());
        vector<int> dp(n + 1, n);
        dp[0] = 0;
        for (int i = 1; i <= n; ++i) {
            dp[i] = dp[i-1] + 1;
            for (int len = 1; len <= i; ++len) {
                string sub = s.substr(i - len, len);
                if (dict.count(sub)) {
                    dp[i] = min(dp[i], dp[i - len]);
                }
            }
        }
        
        return dp[n];
    }
};
