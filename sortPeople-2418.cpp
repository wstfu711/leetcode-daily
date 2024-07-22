class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int, string> mp;
        for (int i = 0; i < names.size(); i++) {
            mp[heights[i]] = names[i];
        }

        sort(heights.begin() , heights.end());
        vector<string> ans;
        int j = heights.size() - 1;
        for(int i = 0 ; i < names.size() ; i++){
            ans.push_back(mp[heights[j]]);
            j--;
        }

        return ans;
    }
};
