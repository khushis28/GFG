//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//User function Template for C++

class Solution{
    public:
    int min_sprinklers(int gallery[], int n)
    {
        // code here
         vector<int>arr(n,-1);
        for(int i=0;i<n;i++){
            int st=i,end=i;
            if(gallery[i]!=-1){
            st=max(0,i-gallery[i]);
            end=min(n-1,i+gallery[i]);
            arr[st]=max(arr[st],end);
            }
        }
        for(int i=1;i<n;i++)arr[i]=max(arr[i],arr[i-1]);
        int c=0;
        for(int i=0;i<n;i){
            c++;
            if(i>arr[i])return -1;
            i=(arr[i]+1);
        }
        return c; 
    }
};




//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        int gallery[n];
        for(int i=0; i<n; i++)
            cin>> gallery[i];
        Solution obj;
        cout<< obj.min_sprinklers(gallery,n) << endl;
    }
	return 1;
}

// } Driver Code Ends