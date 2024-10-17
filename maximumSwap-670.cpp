class Solution {
public:
    int maximumSwap(int num) {
        priority_queue<int> pq;
        stack<int> s;
        int n = num;
        while(n > 0){
            int a = n % 10;
            pq.push(a);
            s.push(a);
            n /= 10;
        }
        int ans = 0;
        int sn = 0;
        int ct = 0;
        while(!s.empty()){
            if(s.top() == pq.top()){
                ans = ans * 10 + s.top();
            }
            else{
                ans = ans * 10 + pq.top();
                sn = s.top();
                s.pop();
                break;
            }
            s.pop();
            pq.pop();
        }
        while(!s.empty()){
            ct *= 10;
            if(s.top() == pq.top()){
                ct = 1;
            }
            ans = ans * 10 + s.top();
            s.pop();
        }
        ans = ans - (ct * (pq.top() - sn));
        return ans;
    }
};
