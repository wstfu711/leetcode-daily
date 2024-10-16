#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;

class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int, char>> pq;
        if(a > 0) pq.push({a, 'a'});
        if(b > 0) pq.push({b, 'b'});
        if(c > 0) pq.push({c, 'c'});
        string ans = "";
        while(!pq.empty()){
            pair<int, char> first = pq.top();
            pq.pop();
            int n = ans.size();
            if(n >= 2 && ans[n-1] == first.second && ans[n-2] == first.second){
                if(pq.empty()){
                    break;
                }
                pair<int, char> second = pq.top();
                pq.pop();
                ans += second.second;
                second.first -= 1;
                if(second.first > 0){
                    pq.push(second);
                }
                pq.push(first);
            }
            else{
                ans += first.second;
                first.first -= 1;
                if(first.first > 0){
                    pq.push(first);
                }
            }
        }
        return ans;
    }
};
