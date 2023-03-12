class Solution {
public:
     vector<int> prisonAfterNDays(vector<int>& cells, int n) {
        int c = (n-1)%14;
        vector<int> tmp;
        for(int i = 0 ; i <= c ; ++i) {
            tmp = cells;
            for(int j = 1 ; j < 7 ; ++j) {
                if(tmp[j-1] == tmp[j+1]) {
                    cells[j] = 1;
                }
                else {
                    cells[j] = 0;
                }
            }
            if(i == 0) {
                cells[0] = 0;
                cells[7] = 0;
            }
        }
        
        return cells;
    }
};
