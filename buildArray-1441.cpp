class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> v = {"Push", "Pop"};
        vector<string> ans;
        vector<int> tmp1, tmp2;
        int i = 0;
        n = 1;
        while(tmp2 != target){
            tmp2.push_back(n);
            ans.push_back(v[0]);
            if(target[i] != tmp2[i]){
                tmp2 = tmp1;
                ans.push_back(v[1]);
            }
            else{
                tmp1 = tmp2;
                i++;
            }
            n++;
        }
        return ans;
    }
};
