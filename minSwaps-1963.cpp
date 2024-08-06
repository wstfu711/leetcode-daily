class Solution {
public:
    int minSwaps(string s) {
        int b = 0 , max = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == ']'){
                b++;
                if(b > max){
                    max = b;
                }
            }
            else{
                b--;
            }
        }
        return (max + 1)/2;
    }
};
