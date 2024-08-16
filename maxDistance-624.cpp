class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int ans = 0;
        int m = arrays[0].back();
        int s = arrays[0][0];
        for(int i = 1 ; i < arrays.size() ; i++){
            if(arrays[i].back() - s > m - arrays[i][0] && arrays[i].back() - s > ans){
                ans = arrays[i].back() - s;
            }
            else if(arrays[i].back() - s < m - arrays[i][0] && m - arrays[i][0] > ans){
                ans = m - arrays[i][0];
            }
            else if(arrays[i].back() - s == m - arrays[i][0] && arrays[i].back() - s > ans){
                ans = arrays[i].back() - s;
            }
            m = max(m, arrays[i].back());
            s = min(s, arrays[i][0]);
        }
        return ans;
    }
};
