class Solution {
public:
    string addBinary(string a, string b) {
        int car = 0;
        int as = a.size() - 1;
        int bs = b.size() - 1;
        string ans = "";

        while(as >= 0 or bs >= 0){
            if(as >= 0){
                if(a[as] == '1'){
                    car++;
                }
                as--;
            }
            if(bs >= 0){
                if(b[bs] == '1'){
                    car++;
                }
                bs--;
            }
            if(car == 3){
                ans = "1" + ans;
                car = 1;
            }
            else if(car == 2){
                ans = "0" + ans;
                car = 1;
            }
            else if(car == 1){
                ans = "1" + ans;
                car = 0;
            }
            else{
                ans = "0" + ans;
            }
        }
        if(car == 1){
            ans = "1" + ans;
        }
        return ans;
    }
};
