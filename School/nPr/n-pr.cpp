//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long long factorial(int num){
        long long result = 1;
        for(int i=1; i<=num; i++){
            result = result*i;
        }
         return result;
    }
    long long nPr(int n, int r){
        if(n<r){
            return 0;
        }
        return factorial(n)/factorial(n-r);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nPr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends