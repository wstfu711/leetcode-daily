class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int ans = 0;
        for(int i = 0 ; i < letters.size() ; ++i){
            if(letters[i] > target){
                ans = i;
                break;
            }
        }
        return letters[ans];
    }
};
