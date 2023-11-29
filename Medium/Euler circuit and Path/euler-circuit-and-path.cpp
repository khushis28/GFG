//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends





class Solution {
public:
    void dfs(int node, vector<vector<int>>& adj, vector<bool>& visited) {
        visited[node] = true;
        for (int i = 0; i < adj[node].size(); ++i) {
            int next = adj[node][i];
            if (!visited[next]) {
                dfs(next, adj, visited);
            }
        }
    }
    
    int isEulerCircuit(int V, vector<int>adj[]){
        vector<bool> visited(V, false);
        int oddDegreeCount = 0;
    
        for (int i = 0; i < V; ++i) {
            if (adj[i].size() % 2 != 0) {
                oddDegreeCount++;
            }
        }
    
        if (oddDegreeCount == 0) {
            return 2; 
        } else if (oddDegreeCount == 2) {
            return 1;
        } else {
            return 0; 
        }
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
		int ans = obj.isEulerCircuit(V, adj);
		cout << ans <<"\n";	}
	return 0;
}
// } Driver Code Ends