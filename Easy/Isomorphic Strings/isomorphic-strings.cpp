//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends

class Solution
{
    public:
    bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
         int m = str1.length(), n = str2.length();
 
    if (m != n)
        return false;
 
    bool marked[MAX_CHARS] = { false };
 
    int map[MAX_CHARS];
    memset(map, -1, sizeof(map));
 
    for (int i = 0; i < n; i++) {
        if (map[str1[i]] == -1) {
            if (marked[str2[i]] == true)
                return false;

            marked[str2[i]] = true;
 
            map[str1[i]] = str2[i];
        }
 
        else if (map[str1[i]] != str2[i])
            return false;
    }
 
    return true;
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends