//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
// User function Template for C++

class Solution{
public:
vector<int> result;
    vector<int> pattern(int N){
        // code here
        if(N<=0)
        {
            result.push_back(N);
            return result;
        }
        result.push_back(N);
        pattern(N-5);
        result.push_back(N);
        return result;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends