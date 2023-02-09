class Solution {
public:
    set<int> test;
    bool ans = false;

    bool isHappy(int n) {
        int sum = 0;
        while(n >= 1){
            sum = sum + pow(n % 10 , 2);
            n = n / 10;
        }
        if(sum == 1){
            ans = true;
        }
        else{
            if(test.count(sum) == 1){
                ans = false;
            }
            else{
                test.insert(sum);
                isHappy(sum);
            }
        }
        return ans;
    }
};
