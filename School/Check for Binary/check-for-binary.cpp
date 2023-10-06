//{ Driver Code Starts
// C++ program to Print root to leaf path WITHOUT
// using recursion
#include <bits/stdc++.h>
using namespace std;

bool isBinary(string str);

// Driver program to test above functions
int main()
{
    string str;
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
       cin >> str;
       cout << isBinary(str) << endl;
    }
    return 0;
}

// } Driver Code Ends


// Return true if str is binary, else false
bool isBinary(string str) {
    bool flag = true;
    int n = str.length();
    char ch;
    for (int i = 0; i < n; i++) {
        ch = str[i];
        if (ch == '1' || ch == '0') {
            flag = true;
        } else {
            flag = false;
            break;
        }
    }
    return flag;
}