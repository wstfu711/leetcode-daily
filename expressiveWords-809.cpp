class Solution {
public:
    int expressiveWords(string s, vector<string>& words) {
        queue<char> q;
        int ans = 0;
        for(int i = 0 ; i < s.size() ; i++){
            q.push(s[i]);
        }

        for(int i = 0 ; i < words.size() ; i++){
            queue<char> tmp = q;
            int ctq = 0, ctw = 1;
            for(int j = 0 ; j < words[i].size() ; j++){
                if(tmp.empty() && j <= words[i].size() - 1){
                    tmp.push('1');
                }
                if(j != words[i].size()-1 && words[i][j] == words[i][j+1] ){
                    ctw++;
                    continue;
                }
                while(!tmp.empty() && tmp.front() == words[i][j]){
                    ctq++;
                    tmp.pop();
                }
                if(ctq < ctw){
                    break;
                }
                else if(ctq != ctw){
                    if(ctq < 3){
                        break;
                    }
                    else{
                        ctq = 0;
                        ctw = 1;
                    }
                }
                else{
                    ctq = 0;
                    ctw = 1;
                }
            }
            if(tmp.empty()){
                if(ctq == 0){
                    ans++;
                }
            }
        }

        return ans;
    }
};
