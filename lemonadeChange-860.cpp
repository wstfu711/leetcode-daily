class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int, int> um;
        for(int i = 0 ; i < bills.size() ; i++){
            if(bills[i] == 5){
                um[5]++;
            }
            else if(bills[i] == 10){
                if(um[5] < 1){
                    return false;
                }
                um[5]--;
                um[10]++;
            }
            else{
                if(um[5] < 3 && !(um[10] > 0 && um[5] > 0)){
                    return false;
                }
                if(um[10] < 1){
                    um[5] -= 3;
                }
                else{
                    um[5]--;
                    um[10]--;
                }
            }
        }
        return true;
    }
};
