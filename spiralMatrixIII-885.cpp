class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> result;
        int dir = 0, steps = 1, stepCount = 0, dirChange = 0;
        int r = rStart, c = cStart;
        result.push_back({r, c});
        while (result.size() < rows * cols) {
            for (int i = 0; i < steps; i++) {
                if (dir == 0) c++;
                else if (dir == 1) r++;
                else if (dir == 2) c--;
                else if (dir == 3) r--;
                if (r >= 0 && r < rows && c >= 0 && c < cols) {
                    result.push_back({r, c});
                }
            }
            dir = (dir + 1) % 4;
            stepCount++;
            if (stepCount == 2) {
                steps++;
                stepCount = 0;
            }
        }
        return result;
    }
};
