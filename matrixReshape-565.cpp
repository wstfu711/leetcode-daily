class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        if(m * n != r * c){
            return mat;
        }
        else{
            vector<vector<int>> ans;
            vector<int> v;
            for(int i = 0 ; i < mat.size() ; i++){
                for(int j = 0 ; j < mat[0].size() ; j++){
                    v.push_back(mat[i][j]);
                    if(v.size() == c){
                        ans.push_back(v);
                        v.clear();
                    }
                }
            }
            return ans;
        }
    }
};
