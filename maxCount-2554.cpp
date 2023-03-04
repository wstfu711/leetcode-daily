class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        set<int> s(banned.begin(), banned.end());
        int ans = 0;
        int sum = 0;
        for(int i = 1 ; i <= n ; ++i){
            if(s.count(i) == 0){
                if(sum+i <= maxSum){
                    sum += i;
                    ans++;
                }
                else{
                    break;
                }
            }
        }
        return ans;
    }
};
