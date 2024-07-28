class Solution {
public:
    bool makesquare(vector<int>& matchsticks) {
        int total = 0;
        for(int i = 0 ; i < matchsticks.size() ; i++){
            total += matchsticks[i];
        }
        if(total % 4 != 0){
            return false;
        }
        int side = total / 4;
        int n = matchsticks.size();
        vector<int> dp(1 << n, -1);
        dp[0] = 0;

        for (int state = 0; state < (1 << n); state++) {
            if (dp[state] == -1) continue;

            for (int i = 0; i < n; ++i) {
                if (!(state & (1 << i)) && dp[state] + matchsticks[i] <= side) {
                    int nextState = state | (1 << i);
                    dp[nextState] = (dp[state] + matchsticks[i]) % side;
                }
            }
        }

        return dp[(1 << n) - 1] == 0;
    }
};
