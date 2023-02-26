class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans = 0;
        int x = 0;
        int y = 0;
        for(int i = 0 ; i < points.size() - 1 ; ++i){
            if(points[i][0] > points[i+1][0]){
                x = points[i][0] - points[i+1][0];
            }
            else{
                x = points[i+1][0] - points[i][0];
            }
            if(points[i][1] > points[i+1][1]){
                y = points[i][1] - points[i+1][1];
            }
            else{
                y = points[i+1][1] - points[i][1];
            }
            if(x > y){
                ans += x;
            }
            else{
                ans += y;
            }
        }
        return ans;
    }
};
