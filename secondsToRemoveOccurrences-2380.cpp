class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int ans = -1;
        string tmp = s;

        while(ans = -1 or s != tmp){
            tmp = s;
            bool check = false;
            char top = s[0];
            for(int i = s.length() - 1 ; i >= 0 ; --i){
                if(check == false and s[i] == '1'){
                    s[0] = '1';
                    check = true;
                }
                if(check == true){
                    s[i+1] = s[i];
                    if(i == 0){
                        s[i] = top;
                    }
                }
            }
            ans++;
        }

        return ans;
    }
};
