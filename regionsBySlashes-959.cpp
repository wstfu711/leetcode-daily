class Solution {
public:
    int regionsBySlashes(vector<string>& grid) {
        int n = grid.size();
        vector<vector<int>> v(n * 3, vector<int>(n * 3, 0));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == '/') {
                    v[i * 3][j * 3 + 2] = 1;
                    v[i * 3 + 1][j * 3 + 1] = 1;
                    v[i * 3 + 2][j * 3] = 1;
                } else if (grid[i][j] == '\\') {
                    v[i * 3][j * 3] = 1;
                    v[i * 3 + 1][j * 3 + 1] = 1;
                    v[i * 3 + 2][j * 3 + 2] = 1;
                }
            }
        }
        function<void(int, int)> dfs = [&](int x, int y) {
            if (x < 0 || y < 0 || x >= n * 3 || y >= n * 3 || v[x][y] != 0)
                return;
            v[x][y] = 1;
            dfs(x + 1, y);
            dfs(x - 1, y);
            dfs(x, y + 1);
            dfs(x, y - 1);
        };
        
        int ans = 0;
        for(int i = 0 ; i < n * 3 ; i++){
            for(int j = 0 ; j < n * 3 ; j++){
                if(v[i][j] == 0){
                    dfs(i, j);
                    ans++;
                }
            }
        }
        return ans;
    }
};
