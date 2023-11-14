//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
        if(s1.size() != s2.size()){
            return false;
        }
        string aux = s1 + s1;
        int n = s1.size();
        for(int i=0; i<=n; i++){
            bool flag {true};
            for(int j=0; j<n; j++){
                if(aux[i+j] != s2[j]){
                    flag = false;
                    break;
                }
            }
            if(flag){
                return flag;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}

// } Driver Code Ends