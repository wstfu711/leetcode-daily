class Solution {
public:
    int addDigits(int num) {
        int ans = 0;
        while(num >= 1){
            ans = ans + num % 10;
            num = num / 10;    
        }
        if(ans >= 10){
            return addDigits(ans);
        }
        else{
            return ans;
        }
    }
};
