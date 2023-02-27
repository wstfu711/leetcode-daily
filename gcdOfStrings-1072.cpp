class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int a = str1.length();
        int b = str2.length();
        string ans = "";
        if(a > b){
            int c = 1;
            int e = 0;
            while(c <= b){
                string tmp = "";
                if(b%c == 0){
                    for(int i = 0 ; i < b/c ; ++i){
                        tmp += str2[i];
                    }
                    string tmp2 = "";
                    for(int j = 0 ; j < str1.length() / tmp.length() ; ++j){
                        tmp2 += tmp;
                    }
                    if(str1 == tmp2){
                        ans = tmp;
                        e = c;
                        break;
                    }
                }
                e = c;
                c++;
            }
            if(c != 1){
                int d = 0;
                while(d < b/e){
                    if(str2[d] != str2[d+b/e]){
                        ans = "";
                        break;
                    }
                    d++;
                }
            }
        }
        if(a < b){
            int c = 1;
            int e = 0;
            while(c <= a){
                string tmp = "";
                if(a%c == 0){
                    for(int i = 0 ; i < a/c ; ++i){
                        tmp += str1[i];
                    }
                    string tmp2 = "";
                    for(int j = 0 ; j < str2.length() / tmp.length() ; ++j){
                        tmp2 += tmp;
                    }
                    if(str2 == tmp2){
                        ans = tmp;
                        e = c;
                        break;
                    }
                }
                e = c;
                c++;
            }
            if(e != 1){
                int d = 0;
                while(d < a/e){
                    if(str1[d] != str1[d+a/e]){
                        ans = "";
                        break;
                    }
                    d++;
                }
            }
        }
        if(str1 == str2){
            ans = str1;
        }
        return ans;
    }
};
//又臭又長又醜
