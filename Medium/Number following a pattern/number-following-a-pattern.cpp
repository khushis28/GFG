//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here 
        stack<int> st;
        string res = "";
        
        int i = 1;
        for(char c : S){
            st.push(i);
            i++;
            
            if(c == 'I'){
                while(!st.empty()){
                    int num = st.top();
                    st.pop();
                    res.append(to_string(num));
                }
            }
        }
        st.push(i);
        while(!st.empty()){
            int num = st.top();
            st.pop();
            res.append(to_string(num));
        }
        return res;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 

// } Driver Code Ends