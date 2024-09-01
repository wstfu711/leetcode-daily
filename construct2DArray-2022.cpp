class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans;
        if(original.size() != m * n){ return ans; }
        ans.resize(m, vector<int>(n));
        int row = 0, col = 0;
        for(int i = 0 ; i < original.size() ; i++){
            if(col == n){ 
                col = 0; 
                row++;
            }
            ans[row][col] = original[i];
            col++;
        }
        return ans;
    }
};
