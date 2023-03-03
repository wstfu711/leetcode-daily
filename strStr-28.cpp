class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans = -1;
        for(int i = 0 ; i < haystack.length()-needle.length()+1; ++i){
            if(haystack.length() < needle.length()){
                break;
            }
            if(haystack[i] == needle[0]){
                int j = i;
                while(j-i < needle.length()){
                    if(needle[j-i] != haystack[j]){
                        break;
                    }
                    j++;
                    if(j-i == needle.length()){
                        ans = i;
                    }
                }
                if(ans == i){
                    break;
                }
            }
        }
        return ans;
    }
};
