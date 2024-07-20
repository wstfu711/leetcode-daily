class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        vector<vector<int>> ans(rowSum.size(), vector<int>(colSum.size(), 0));
        int a = 0, b = 0;
        while(a < rowSum.size() && b < colSum.size()){
            if(rowSum[a] < colSum[b]){
                ans[a][b] = rowSum[a];
                colSum[b] -= rowSum[a];
                rowSum[a] = 0;
           }else{
                ans[a][b] = colSum[b];
                rowSum[a] -= colSum[b];
                colSum[b] = 0;
           }
           if(rowSum[a] == 0){
                a++;
           }
           if(colSum[b] == 0){
                b++;
           }
        }
        
        return ans;
    }
};
