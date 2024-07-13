#include <vector>
#include <algorithm>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        struct Robot {
            int position;
            int health;
            char direction;
            int index;
        };

        vector<Robot> robots;
        for (int i = 0; i < positions.size(); ++i) {
            robots.push_back({positions[i], healths[i], directions[i], i});
        }
        sort(robots.begin(), robots.end(), [](const Robot& a, const Robot& b) {
            return a.position < b.position;
        });
        stack<Robot> st;
        for (int i = 0; i < robots.size(); ++i) {
            auto robot = robots[i];
            if (robot.direction == 'R') {
                st.push(robot);
            } else {
                while (!st.empty() && st.top().direction == 'R') {
                    Robot topRobot = st.top();
                    if (topRobot.health > robot.health) {
                        st.top().health -= 1;
                        robot.health = -1;
                        break;
                    } else if (topRobot.health < robot.health) {
                        robot.health -= 1;
                        st.pop();
                    } else {
                        st.pop();
                        robot.health = -1;
                        break;
                    }
                }
                if (robot.health > 0) {
                    st.push(robot);
                }
            }
        }
        vector<int> result(positions.size(), -1);
        while (!st.empty()) {
            Robot robot = st.top();
            st.pop();
            result[robot.index] = robot.health;
        }
        result.erase(remove(result.begin(), result.end(), -1), result.end());
        return result;
    }
};
