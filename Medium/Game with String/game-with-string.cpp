//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        priority_queue<int> maxheap;
        map<char,int>m;
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        for(auto it:m){
            maxheap.push(it.second);
        }
        while(k!=0){
            int top=maxheap.top();
            maxheap.pop();
            top=top-1;
            k--;
            maxheap.push(top);
        }
        int sum=0;
        while(!maxheap.empty()){
            int top=maxheap.top();
            maxheap.pop();
            sum=sum+(top*top);
            
        }
        return sum;
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends