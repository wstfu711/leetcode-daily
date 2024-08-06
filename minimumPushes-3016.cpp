class Solution {
public:
    int minimumPushes(string word) {
        int ans = 0;
        unordered_map<char, int> um;
        for(int i = 0 ; i < word.size() ; i++){
            if(um.count(word[i]) > 0){
                um[word[i]]++;
            }
            else{
                um[word[i]] = 1;
            }
        }

        vector<pair<char, int>> v(um.begin(), um.end());
        sort(v.begin(), v.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
            return a.second > b.second;
        });
        int count = 1;
        for(int i = 0 ; i < v.size() ; i++){
            if(i == 0 or i % 8 != 0){
                ans = ans + (count * v[i].second);
            }
            else{
                count++;
                ans = ans + (count * v[i].second);
            }
        }

        return ans;
    }
};
