class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> um;
        for(int i = 0 ; i < arr.size() ; i++){
            um[arr[i]]++;
        }
        vector<pair<int, int>> v(um.begin(), um.end());
        sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b){
            return a.second > b.second;
        });
        int ans = 0, sum = 0;
        while(arr.size() / 2 > sum){
            sum += v[ans].second;
            ans++;
        }
        return ans;
    }
};
