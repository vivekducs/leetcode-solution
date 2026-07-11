class Solution {
public:
     void dfs( int i,unordered_map<int,vector<int>>& adj,vector<bool>&visited, int &v,int &e ){
        
        visited[i]=true;
        v++;
        e+=adj[i].size();
        for( int &ngbr:adj[i]){
            if(!visited[ngbr]){
                dfs(ngbr,adj,visited,v,e);
            }
        }

     }

    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        int ans=0;
        unordered_map<int,vector<int>>adj;

        // build graph structure
        for( auto & edge:edges){
            int u=edge[0];
            int v=edge[1];
           adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // create a vector visited
        vector<bool>visited( n,false);
        for( int i=0;i<n;i++){
            if( visited[i]){
                continue;
            }
            int v=0;
            int e=0;
            dfs( i,adj,visited,v,e);
            if(v*(v-1)==e) ans++;
        }
        return ans;
        
    }
};