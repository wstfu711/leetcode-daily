class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        if(grid.size() < 3 || grid[0].size() < 3){
            return 0;
        }
        int ans = 0, h = 0;
        while(h < grid.size() - 2){
            for(int i = 0 ; i < grid[0].size() - 2 ; i++){
                int a = 0;
                vector<int> v(10, 0);
                for(int x = 0 ; x < 3 ; x++){
                    for (int y = 0; y < 3; ++y) {
                        int num = grid[h + x][i + y];
                        if (num < 1 || num > 9 || v[num] > 0){
                            a = 1;
                            break;
                        }
                        v[num]++;
                    }
                }
                int sum = grid[h][i] + grid[h][i+1] + grid[h][i+2];
                for(int j = 0 ; j < 3 ; j++){
                    if(sum != grid[h+j][i] + grid[h+j][i+1] + grid[h+j][i+2]){
                        a = 1;
                        break;
                    }
                    if(sum != grid[h][i+j] + grid[h+1][i+j] + grid[h+2][i+j]){
                        a = 1;
                        break;
                    }
                }
                if(a == 0){
                    int l1 = grid[h][i] + grid[h+1][i+1] + grid[h+2][i+2];
                    int l2 = grid[h+2][i] + grid[h+1][i+1] + grid[h][i+2];
                    if(sum == l1 && sum == l2){
                        ans++;
                    }
                }
            }
            h++;
        }
        return ans;
    }
};
