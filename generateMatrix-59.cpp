class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n, vector<int>(n, 0));
        int dx[4] = {0, 1, 0, -1};
        int dy[4] = {1, 0, -1, 0};
        
        int x = 0, y = 0, direction = 0;
        
        for (int i = 1; i <= n * n; ++i) {
            v[x][y] = i;
            int newX = x + dx[direction];
            int newY = y + dy[direction];
            if (newX < 0 || newX >= n || newY < 0 || newY >= n || v[newX][newY] != 0) {
                direction = (direction + 1) % 4;
                newX = x + dx[direction];
                newY = y + dy[direction];
            }
            
            x = newX;
            y = newY;
        }
        
        return v;
    }
};
