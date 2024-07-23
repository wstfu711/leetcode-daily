class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> um;
        for (int num : nums) {
            um[num]++;
        }
        vector<pair<int, int>> v(um.begin(), um.end());
        sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            if (a.second != b.second) {
                return a.second < b.second;
            }
            return a.first > b.first;
        });
        vector<int> ans;
        for (const auto& p : v) {
            for (int i = 0; i < p.second; ++i) {
                ans.push_back(p.first);
            }
        }

        return ans;
    }
};
