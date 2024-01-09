//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            vector<int> indices;
            int i=0,j=0;
            int n = txt.length();
            int m = pat.length();
            
            while(i<n){
                if(txt[i] == pat[j]){
                    int k = i;
                    while(j<m){
                        if(txt[k]!=pat[j]){
                            j=0;
                            break;
                        }
                        k++;j++;
                    }
                    if(j!=0){
                        indices.push_back(i+1);
                        j=0;
                    }
                }
                i++;
            }
            return indices;
        }
     
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        if (res.size()==0)
            cout<<-1<<endl;
        else {
            for (int i : res) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends