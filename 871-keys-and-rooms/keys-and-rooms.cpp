class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<int> vis(n,0);
        queue<int> q;
        vis[0]=1;
        for(int i=0;i<rooms[0].size();i++){
            q.push(rooms[0][i]);
        }
        while(!q.empty()){
            int t=q.front();
            q.pop();
            if(!vis[t]){
                vis[t]=1;
                for(int i=0;i<rooms[t].size();i++){
                    q.push(rooms[t][i]);
                }
            }
        }
        for(int i=0;i<n;i++){
            if(!vis[i]) return false;
        }
        return true;
    }
};