class Solution {
public:
    int climbStairs(int n) {
        //just a fibonacci question
        int num = 1;
        int num2 = 1;
        int temp = 0;
        if(n < 2){
            return n;
        }
        else{
            for(int i = 2 ; i <= n ; ++i){
                temp = num2;
                num2 = num + num2;
                num = temp;
            }
        }
        return num2;
    }
};
