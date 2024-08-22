class Solution {
public:
    int findComplement(int num) {
        int ans = 0, ct = 0;
        if(num == 0){ return 1;}
        while(num > 0){
            if(ct == 0){ ct = 1; }
            else{ ct *= 2; }
            if(num % 2 == 0){
                ans += ct;
            }
            num /= 2;
        }
        return ans;
    }
};
