class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int sum = 0;
        for(int i = 0 ; i < chalk.size() ; i++){
            k -= chalk[i];
            sum += chalk[i];
            if(k < 0){
                return i;
            }
        }
        k %= sum;
        for(int i = 0 ; i < chalk.size() ; i++) {
            if(k < chalk[i]) {
                return i;
            }
            k -= chalk[i];
        }
        return -1;
    }
};
