//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
// User function Template for C++

class Solution{
public:
    int findWinner(int n, int A[]){
        int val = 0;
        
        for(int i = 0; i < n; i++)
            val ^= A[i];
        
        return ((n & 1) and val > 0) ? 2 : 1;
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i = 0;i < n;i++)
            cin>>A[i];
        
        Solution ob;
        cout<<ob.findWinner(n, A)<<"\n";
    }
    return 0;
}
// } Driver Code Ends