class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int max = prices[0];
        int ans = 0;
        for(int i = 1 ; i < prices.size() ; ++i){
            if(min > prices[i]){
                min = prices[i];
                max = min;
            }
            else if(prices[i] > max){
                int tmp = prices[i] - min;
                if(ans < tmp){
                    ans = tmp;
                    max = prices[i];
                }
            }
        }
        return ans;
    }
};
