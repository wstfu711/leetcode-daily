class Solution {
public:
    bool canFinish(int numCourses, std::vector<std::vector<int>>& prerequisites) {
        vector<vector<int>> adjList(numCourses);
        vector<int> inDegree(numCourses, 0);
        for (const auto& pair : prerequisites) {
            int course = pair[0];
            int prerequisite = pair[1];
            adjList[prerequisite].push_back(course);
            inDegree[course]++;
        }
        queue<int> q;
        for (int i = 0; i < numCourses; ++i) {
            if (inDegree[i] == 0) {
                q.push(i);
            }
        }
        int coursesTaken = 0;
        while (!q.empty()) {
            int current = q.front();
            q.pop();
            coursesTaken++;
            for (int neighbor : adjList[current]) {
                inDegree[neighbor]--;
                if (inDegree[neighbor] == 0) {
                    q.push(neighbor);
                }
            }
        }
        return coursesTaken == numCourses;
    }
};
