class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> UM = {
            { 'I' , 1},
            { 'V' , 5},
            { 'X' , 10},
            { 'L' , 50},
            { 'C' , 100},
            { 'D' , 500},
            { 'M' , 1000},
        };
        
        int sum = 0;
        for(int i = 0; i < s.length() ; ++i){
            if(i != 0 && UM[s[i]] > UM[s[i-1]]){
                sum = sum + UM[s[i]] - 2 * UM[s[i-1]];
            }
            else{
                sum = sum + UM[s[i]];
            }
        }

        return sum;
    }
};
