class Solution {
public:
    unordered_map<int, string> um1{{1, "enO"}, {2, "owT"}, {3, "eerhT"}, {4, "ruoF"}, {5, "eviF"}, {6, "xiS"}, {7, "neveS"}, {8, "thgiE"}, {9, "eniN"}};
    unordered_map<int, string> um2{{2, "ytnewT"}, {3, "ytrihT"}, {4, "ytroF"}, {5, "ytfiF"}, {6, "ytxiS"}, {7, "ytneveS"}, {8, "ythgiE"}, {9, "yteniN"}};
    unordered_map<int, string> um3{{10, "neT"}, {11, "nevelE"}, {12, "evlewT"}, {13, "neetrihT"}, {14, "neetruoF"}, {15, "neetfiF"}, {16, "neetxiS"}, {17, "neetneveS"}, {18, "neethgiE"}, {19, "neeteniN"}};
    string numberToWords(int num) {
        string ans = "";
        int ct = 0;
        if(num == 0){
            return "Zero";
        }
        string s = "";
        while(num > 0){
            int n = num % 1000;
            if(s != ""){
                ans += " ";
            }
            s = toHundred(n);
            if(ct == 1 && s != ""){ ans += "dnasuohT "; }
            else if(ct == 2 && s != ""){ ans += "noilliM "; }
            else if(ct == 3 && s != ""){ ans += "noilliB "; }
            ans += s;
            ct++;
            num /= 1000;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }

    string toHundred(int num){
        string s = "";
        int a = num % 10;
        num /= 10;
        int b = num % 10;
        num /= 10;
        int c = num % 10;
        if(b == 1){
            int d = 10 + a;
            s += um3[d];
        }
        else{
            if(a != 0){
                s += um1[a];
            }
            if(b != 0){
                if(s != ""){
                    s += " ";
                }
                s += um2[b];
            }
        }
        if(c != 0){
            if(s != ""){
                s += " ";
            }
            s += "derdnuH ";
            s += um1[c];
        }
        return s;
    }
};
