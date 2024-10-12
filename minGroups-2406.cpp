class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        map<int, int> events;
        for (const auto& interval : intervals) {
            events[interval[0]]++;
            events[interval[1] + 1]--;
        }
        
        int maxG = 0, cur = 0;
        for (const auto& event : events) {
            cur += event.second;
            maxG = max(maxG, cur);
        }
        
        return maxG;
    }
};
