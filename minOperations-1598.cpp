class Solution {
public:
    int minOperations(vector<string>& logs) {
        int ans = 0;
        for(int i = 0 ; i < logs.size() ; i++){
            if(ans > 0 && logs[i] == "../"){
                ans -= 1;
            }
            else if(logs[i] == "./"){
                ans += 0;
            }
            else if(logs[i] != "../"){
                ans++;
            }
        }
        return ans;
    }
};
