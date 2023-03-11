class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        int x = (tomatoSlices - 2 * cheeseSlices) / 2;
        int y = (4 * cheeseSlices - tomatoSlices) / 2;
        vector<int> ans;
        if(tomatoSlices >= 2 * cheeseSlices and tomatoSlices <= 4 * cheeseSlices and tomatoSlices % 2 != 1 and y >= 0 and x >= 0){
            ans.push_back(x);
            ans.push_back(y);
        }
        return ans;
    }
};
