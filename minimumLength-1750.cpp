class Solution {
public:
    int minimumLength(string s) {
        int ans = 0, i = 0, n = s.size() - 1;
        while(i != n){
            if(s[i] != s[n]){
                break;
            }
            if(i + 1 == n){ return 0; }
            if(s[i] == s[i+1]){ i++; }
            else if(s[n] == s[n - 1]){ n--; }
            else{
                i++;
                n--;
            }
        }
        return n - i + 1;
    }
};
