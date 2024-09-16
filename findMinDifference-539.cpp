class Solution {
public:
    int findMinDifference(vector<string>& t) {
        vector<int> mins(t.size());
        for(int i = 0 ; i < t.size() ; i++){
            int a = t[i][0] - '0', b = t[i][1] - '0', c = t[i][3] - '0', d = t[i][4] - '0';
            int n = (a * 10 + b) * 60 + c * 10 + d;
            mins[i] = n;
        }
        int ans = INT_MAX;
        sort(mins.begin(), mins.end());
        for(int i = 0 ; i < mins.size()-1 ; i++){
            int n = mins[i+1] - mins[i];
            ans = min(ans, n);
        }

        int n = mins[0] - mins[mins.size() - 1] + (24 * 60);

        return min(n, ans);
    }
};
