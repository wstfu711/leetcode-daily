class Solution {
public:
    int getLucky(string s, int k) {
        int ans = 0;
        for(int i = 0 ; i < s.size() ; i++){
            int c = s[i] - 'a' + 1;
            if(c / 10 > 0){
                ans += (c % 10);
                c /= 10;
            }
            ans += c;
        }
        int i = 1;
        while(i < k){
            int tmp = ans;
            ans = 0;
            do{
                ans = ans + (tmp % 10);
                tmp /= 10;
            }while(tmp > 0);
            i++;
        }
        return ans;
    }
};
