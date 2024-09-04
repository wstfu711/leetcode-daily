class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        vector<int> pos(2, 0);
        unordered_set<string> obstacleSet;
        for (auto& obs : obstacles) {
            obstacleSet.insert(to_string(obs[0]) + "," + to_string(obs[1]));
        }
        vector<vector<int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        int dir = 0;
        int maxDist = 0;
        for (int command : commands) {
            if (command == -1) {
                dir = (dir + 1) % 4;
            } else if (command == -2) {
                dir = (dir + 3) % 4;
            } else {
                for (int i = 0; i < command; ++i) {
                    int newX = pos[0] + directions[dir][0];
                    int newY = pos[1] + directions[dir][1];
                    if (obstacleSet.count(to_string(newX) + "," + to_string(newY))) {
                        break;
                    }
                    pos[0] = newX;
                    pos[1] = newY;
                    maxDist = max(maxDist, pos[0] * pos[0] + pos[1] * pos[1]);
                }
            }
        }
        return maxDist;
    }
};
