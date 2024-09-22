class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();
        vector<int> min_len(n, INT_MAX);
        int l = 0, sum = 0, ans = INT_MAX, best_len = INT_MAX;

        for (int r = 0; r < n; ++r) {
            sum += arr[r];
            while (sum > target) {
                sum -= arr[l++];
            }
            if (sum == target) {
                if (l > 0 && min_len[l - 1] != INT_MAX) {
                    ans = min(ans, min_len[l - 1] + (r - l + 1));
                }
                best_len = min(best_len, r - l + 1);
            }
            min_len[r] = best_len;
        }
        return ans == INT_MAX ? -1 : ans;
    }
};
