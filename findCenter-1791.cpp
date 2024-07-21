class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int ans = edges[0][0];
        for(int i = 1 ; i < edges.size() ; i++){
            if(edges[i][0] != ans){
                if(edges[i][1] != ans){
                    ans = edges[0][1];
                    break;
                }
            }
        }
        return ans;
    }
};
