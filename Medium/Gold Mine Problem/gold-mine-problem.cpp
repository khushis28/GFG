//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++


    // User function Template for C++

class Solution{
public:
    int ans = 0;
    vector<vector<int>> dp;
    int help(int i, int j, int n, int m, vector<vector<int>> &M) {
        if (i < 0 or i >= n ) return INT_MIN;
        if (j == m) return 0;
        if (dp[i][j] != -1) return dp[i][j];
        return dp[i][j] = M[i][j] + max({help(i-1, j+1, n, m, M), help(i, j+1, n, m, M), help(i+1, j+1, n, m, M)});
    }
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        // code here
        dp.resize(n+1, vector<int>(m+1, -1));
        for (int i = 0; i < n; i++) {
            ans = max(ans, help(i, 0, n, m, M));
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}
// } Driver Code Ends