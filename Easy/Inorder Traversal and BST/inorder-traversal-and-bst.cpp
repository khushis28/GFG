//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

//User function Template for C++

class Solution {
  public:
//Function to check if the given array represents a valid BST.
int isRepresentingBST(int arr[], int N)
{
    //iterating over the array starting from the second element.
    for(int i=1;i<N;i++)
    {
        //if the current element is less than or equal to the previous element,
        //return 0 as it does not represent a valid BST.
        if(arr[i]<=arr[i-1])
            return 0;
    }
    //return 1 if the array represents a valid BST.
    return 1;
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
        int arr[N];
        for(int i=0;i<N;i++)cin>>arr[i];
        Solution ob;
        cout<<ob.isRepresentingBST(arr,N)<<endl;
    }
    return 0;
}
// } Driver Code Ends