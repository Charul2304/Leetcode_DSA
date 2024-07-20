class Solution {
public:
    int fillCups(vector<int>& amount) {
        int count=0;
        priority_queue<int> pq;
        for(auto x:amount){
            pq.push(x);
        }
        while(pq.top()!=0){
            int first=pq.top()-1;
            pq.pop();
            int second=pq.top()-1;
            pq.pop();
            pq.push(first);
            pq.push(second);
            count++;
        }
        return count;
    }
};