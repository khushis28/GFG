//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function Template for C++

class Solution{
public:
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
        int n=S.size();
        vector<int> cnt;
        unordered_map<int, int>mp;
        for(int i=0;i<S.size();i++){
            if(mp[S[i]]<1){
            mp[S[i]]=i+1;
            }
        }
        vector<pair<int, int>> ans;
        for(int i=0;i<n;i++){
            ans.push_back(make_pair(F[i], S[i]));
        }
        sort(ans.begin(), ans.end());
        cnt.push_back(mp[ans[0].second]);
        int last=ans[0].first;
        for(int i=1;i<n;i++){
            if(ans[i].second>last){
                cnt.push_back(mp[ans[i].second]);
                last=ans[i].first;
            }
        }
        sort(cnt.begin(), cnt.end());
        return cnt;
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> S(n),F(n);
        for(int i=0;i<n;i++){
            cin>>S[i];
        }
        for(int i=0;i<n;i++){
            cin>>F[i];
        }
        Solution ob;
        vector<int> ans=ob.maxMeetings(n,S,F);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i!=ans.size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends