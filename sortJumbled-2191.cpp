class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<tuple<int, int, int>> v;
        
        for (int i = 0; i < nums.size(); ++i) {
            int n = 0, m = 1;
            int tmp = nums[i];
            do {
                int digit = tmp % 10;
                n = n + mapping[digit] * m;
                m *= 10;
                tmp /= 10;
            } while (tmp > 0);

            v.push_back(make_tuple(n, nums[i], i));
        }
        sort(v.begin(), v.end(), [](const tuple<int, int, int>& a, const tuple<int, int, int>& b) {
            if (get<0>(a) != get<0>(b)) {
                return get<0>(a) < get<0>(b);
            }
            return get<2>(a) < get<2>(b);
        });
        vector<int> ans;
        for (const auto& p : v) {
            ans.push_back(get<1>(p));
        }

        return ans;
    }
};
