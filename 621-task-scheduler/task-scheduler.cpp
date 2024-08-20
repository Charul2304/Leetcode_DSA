class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int freq[26]={0};
        priority_queue<int> pq;
        for(auto x:tasks){
            freq[x-'A']++;
        }
        for(int i=0;i<26;i++){
            if(freq[i]>0){
                pq.push(freq[i]);
            }
        }
        int time=0;
        while(!pq.empty()){
            int cycle=n+1;
            vector<int> store;
            int taskcount=0;
            while(cycle-- && !pq.empty()){
                if(pq.top()>1){
                    store.push_back(pq.top()-1);
                }
                pq.pop();
                taskcount++;
            }
            for(auto x:store){
                pq.push(x);
            }
            time+=(pq.empty() ? taskcount : n+1);
        }
        return time;
    }
   
};;