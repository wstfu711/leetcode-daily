class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sorted = arr;
        sort(sorted.begin(), sorted.end());
        sorted.erase(unique(sorted.begin(), sorted.end()), sorted.end());
        unordered_map<int, int> rankMap;
        for(int i = 0; i < sorted.size(); i++) {
            rankMap[sorted[i]] = i + 1;
        }
        for(int i = 0; i < arr.size(); i++) {
            arr[i] = rankMap[arr[i]];
        }
        return arr;
    }
};
