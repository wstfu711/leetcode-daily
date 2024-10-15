class Solution {
public:
    long long minimumSteps(string s) {
       long long ans = 0;
        int l = 0, r = 1;
        while(l < s.size()){
            if(s[l] == '0'){
                l++;
                r++;
            }
            else{
                while(r < s.size()){
                    if(s[r] == '0'){
                        ans = ans + r - l;
                        s[r] = s[l];
                        l = l + 1;
                        r = r + 1;
                        break;
                    }
                    else{
                        r++;
                    }
                }
            }
            if(r == s.size()){
                break;
            }
        }
        return ans;
    }
};
