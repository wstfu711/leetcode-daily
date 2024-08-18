class Solution {
public:
    int nthUglyNumber(int n) {
        priority_queue<long, vector<long>, greater<long>> pq;
        unordered_map<long, int> um;
        vector<int> v = {2, 3, 5};
        pq.push(1);
        um[1] = 1;
        long ans = 0;
        for(int i = 0 ; i < n ; i++){
            ans = pq.top();
            pq.pop();
            for(int j = 0 ; j < 3 ; j++){
                long num = ans * v[j];
                if(um[num] < 1){
                    pq.push(num);
                    um[num] = 1;
                }
            }
        }
        return static_cast<int>(ans);
    }
};
