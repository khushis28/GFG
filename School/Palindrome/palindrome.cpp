//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		for(int i=0; i<n; i++){
		    int num=n;
		    int sum=0;
		    while(num!=0){
		        int rem=num%10;
		        sum=sum*10+rem;
		        num=num/10;
		    }
		    if(sum!=n)
		        return "No";
		    }
		      return "Yes";
		} 
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends