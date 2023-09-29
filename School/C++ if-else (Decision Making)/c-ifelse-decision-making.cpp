//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string compareFive(int n){
        // code here 
        string res;
        if(n>5){
            res="Greater than 5";
        }
        else if(n<5){
            res= "Less than 5";
        }
        else{
            res="Equal to 5";
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
        int N;
        cin >> N;
        Solution ob;
        cout << ob.compareFive(N) << endl;
    }
    return 0; 
} 

// } Driver Code Ends