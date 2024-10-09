class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = 0, m = 0;
        for(char c : s){
            if(c == '(') n++;
            else{
                if(n == 0) m++;
                else n--;
            }
        }
        return n + m;
    }
};
