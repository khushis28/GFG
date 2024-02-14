//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
private:
    set<vector<int>> st;
    void DFS(int ind,int parent,int &currTime,vector<int> &vis,vector<int> &lowTime,vector<int> &TOI,vector<int> adj[]){
        vis[ind] = 1;
        lowTime[ind] = TOI[ind] = currTime++;
        
        for(auto adjNode : adj[ind]){
            if(adjNode == parent) continue;
            if(vis[adjNode] == 0){
                DFS(adjNode,ind,currTime,vis,lowTime,TOI,adj);
                
                lowTime[ind] = min(lowTime[ind],lowTime[adjNode]); 
                
                if(TOI[ind] < lowTime[adjNode]){
                    vector<int> edge = {ind,adjNode};
                    sort(edge.begin(),edge.end());
                    st.insert(edge);
                }
            }
            else{
                lowTime[ind] = min(lowTime[ind],lowTime[adjNode]); 
            }
        }
    }
public:
vector<vector<int>>criticalConnections(int v, vector<int> adj[]){
    vector<int> vis(v,0),lowTime(v),TOI(v);
    int currTime = 0;
    DFS(0,-1,currTime,vis,lowTime,TOI,adj);
   
   vector<vector<int>> res(st.begin(),st.end());
   
    return res;
}
};


//{ Driver Code Starts.

int main(){
	int tc;
    cin >> tc;
    while(tc--){
        int V, E;
        cin >> V >> E;
        vector<int>adj[V];
        for(int i = 0; i < E; i++){
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        vector<vector<int>>ans = obj.criticalConnections(V, adj);
        
        for(int i=0;i<ans.size();i++)
            cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
    }
	return 0;
}
// } Driver Code Ends