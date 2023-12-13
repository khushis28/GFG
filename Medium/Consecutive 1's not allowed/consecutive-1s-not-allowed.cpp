//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
//User function template for C++
class Solution{
public:
    // #define ll long long
    ll countStrings(int n) 
    {
        vector<int>ones(n+1,0),zeros(n+1,0);
        
        int mod = 1e9 +7;
        ones[0]=1;ones[1]=1;
        zeros[0]=1;zeros[1]=2;
        for(int i=2;i<n;i++)
        {
            ones[i]=(ones[i-1]+ones[i-2])%mod;
            zeros[i]=(zeros[i-1]+zeros[i-2])%mod;
        }
        return (ones[n-1]+zeros[n-1])%mod;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends