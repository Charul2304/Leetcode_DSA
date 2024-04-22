class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        int operations=0;
        unordered_set<string> dead,vis;
        for(auto x:deadends){
            dead.insert(x);
        }
        if(dead.count("0000")) return -1;
        queue<string> q;
        q.push("0000");
        vis.insert("0000");
        while(q.size()){
            int size=q.size();
            while(size--){
                string curstate=q.front();
                q.pop();
                if(curstate==target) return operations;
                for(int i=0;i<4;i++){
                    string newstate=curstate;
                    newstate[i]=='9' ? newstate[i]='0':newstate[i]++;
                    if(!vis.count(newstate) and !dead.count(newstate)){
                        q.push(newstate);
                        vis.insert(newstate);
                    }
                    newstate=curstate;
                    newstate[i]=='0' ? newstate[i]='9':newstate[i]--;
                    if(!vis.count(newstate) && !dead.count(newstate)){
                        q.push(newstate);
                        vis.insert(newstate);
                    }
                }
            }
            operations++;
        }
        return -1;
    }
};