class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int rigth = *max_element(piles.begin(), piles.end());
        while(left < rigth){
            int mid = left + (rigth - left)/2;
            int hour = 0;
            for(int i = 0 ; i < piles.size() ; ++i){
                hour += (piles[i] + mid - 1)/mid;
            }
            if(hour > h){
                left = mid + 1;
            }
            else{
                rigth = mid;
            }
        }
        return left;
    }
};
