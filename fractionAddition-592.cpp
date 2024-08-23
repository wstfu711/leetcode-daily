class Solution {
public:
    string fractionAddition(string expression) {
        char c = '+';
        expression.push_back('+');
        int demsum = 0, sum = 0, tmp = 0, dem = 0;
        bool div = false;
        if(expression[0] == '-'){ c = '-'; }
        else{ tmp = expression[0] - '0'; }
        for(int i = 1 ; i < expression.size() ; i++){
            if(expression[i] == '/'){ div = true; }
            else if(expression[i] == '-' or expression[i] == '+'){
                if(!div){ dem++; }
                int g = gcd(tmp, dem);
                tmp = tmp / g;
                dem = dem / g;
                if(demsum == 0){
                    if(c == '-'){ sum = 0 - tmp; }
                    else{ sum = tmp; }
                    demsum = dem;
                }
                else{
                    int g2 = gcd(demsum, dem);
                    tmp = tmp * demsum / g2;
                    sum = sum * dem / g2;
                    if(c == '-'){ sum -= tmp; }
                    else{ sum += tmp; }
                    demsum = dem * demsum / g2;
                }
                int g3 = gcd(demsum, sum);
                sum  /= g3;
                demsum /= g3;
                c = expression[i];
                tmp = 0, dem = 0;
                div = false;
            }
            else{
                int n = expression[i] - '0';
                if(!div){ tmp = tmp * 10 + n; }
                else{ dem = dem * 10 + n; }
            }
        }
        string ans = to_string(sum) + '/' + to_string(demsum);
        return ans;
    }
};
