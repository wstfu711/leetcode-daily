class Solution {
public:
    bool judgeSquareSum(int c) {
        int n = static_cast<int>(sqrt(c));
        for(int i = 0 ; i <= n ; i++){
            if(isPerfectSquare(c - (i * i))){
                return true;
            }
        }

        return false;
    }

    bool isPerfectSquare(int num) {
        int root = static_cast<int>(sqrt(num));
        return root * root == num;
    }
};
