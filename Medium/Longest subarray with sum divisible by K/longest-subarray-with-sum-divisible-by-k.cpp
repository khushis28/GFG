//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	    vector<int> mp(k,-2);
   mp[0] = -1;
/*initialise from -1 as rem=0 counts one element*/
   int sum = 0;
   int ans = 0;
   for(int i=0;i<n;i++)
   {
       sum += arr[i];
       sum = sum%k; //Taking reaminder of the sum
       
       if(sum<0)
       sum += k;
       
       if(mp[sum]!=-2)
       {
           ans = max(ans,i-mp[sum]);
       }
       else 
       mp[sum] = i;
   }
   return ans;
	}
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}

// } Driver Code Ends