class Solution {
public:
    bool canWinNim(int n) {
        bool ans = false;
        if(n % 4 != 0){
            ans = true;
        }
        return ans;
    }
};
