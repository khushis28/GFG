//{ Driver Code Starts
// Initial Template for C++

// {Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


// } Driver Code Ends

// User function Template for C++


// User function Template for C++

class Solution {
  public:
    int dataTypeSize(string str) {
        // your code here
        int s;
        if (str == "Character") 
            s = sizeof(char);
        else if (str == "Integer") 
            s = sizeof(int);
        else if (str == "Long") 
            s = sizeof(long);
        else if (str == "Float") 
            s = sizeof(float);
        else if (str == "Double") 
            s = sizeof(double);
        
        return s;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.dataTypeSize(str);
        cout << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends