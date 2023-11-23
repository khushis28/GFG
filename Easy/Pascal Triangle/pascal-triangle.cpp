//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// #define ll long long
class Solution{
    int mod = 1e9+7;
    vector<long long> solve(int n, vector<long long>prev){
        if(!n) return prev;
        vector<long long> cur(prev.size()+1, 1);
        for(int i = 1; i < prev.size(); i++)
            cur[i] = (prev[i] + prev[i-1])%mod;
        return solve(--n, cur);
    }
    
public:
    vector<long long> nthRowOfPascalTriangle(int n) {
        // code here
        if(n==1) return {1LL*1};
        if(n==2) return {1LL*1, 1LL*1};
        return solve(n-2, {1LL*1, 1LL*1});
    }
};

//{ Driver Code Starts.


void printAns(vector<long long> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends