class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double ans = customers[0][1];
        double stamp = customers[0][0] + customers[0][1];
        for(int i = 1 ; i < customers.size() ; i++){
            if(stamp >=  customers[i][0]){
                stamp += customers[i][1];
                ans = ans + stamp - customers[i][0];
            }
            else{
                stamp = customers[i][0] + customers[i][1];
                ans = ans + customers[i][1];
            }
        }
        return ans / customers.size();
    }
};
