//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
public:
    int dp[100][100][100] ;
    int N ;
    
    int solve( int i , int j , int k , vector<vector<int>> &arr )
    {
        if( i == N - 1 && j == N - 1 && k == arr[i][j] ) return 1 ;
        if( k <= 0 or i >= arr.size()  or j >= arr.size()  ) return 0 ;
        
        if( dp[i][j][k] != -1 ) return dp[i][j][k] ;
        
        return dp[i][j][k]  = solve( i + 1 , j , k - arr[i][j] , arr ) + solve( i , j+1 , k - arr[i][j] , arr ) ;
        
    }
    long long numberOfPath(int n, int k, vector<vector<int>> &arr){
        
        // Code Here
        N = n ;
        memset( dp , -1 , sizeof(dp) ) ;
        return solve( 0 , 0 , k , arr ) ;
    }
};


//{ Driver Code Starts.

int main()
{
    Solution obj;
    int i,j,k,l,m,n,t;
    cin>>t;
    while(t--)
    {
        cin>>k>>n;
        vector<vector<int>> v(n, vector<int>(n, 0));
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                cin>>v[i][j];
        cout << obj.numberOfPath(n, k, v) << endl;
    }
}
// } Driver Code Ends