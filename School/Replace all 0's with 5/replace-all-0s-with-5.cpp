//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
// Driver program to test above function

// } Driver Code Ends
class Solution{
  public:
    /*you are required to complete this method*/
    int convertFive(int n)
    {
    //Your code here
        if(n==0){
            return 5;
        }
        int result=0;
        int decimalPlace=1;
        while(n>0){
            int digit =n%10;
            if(digit ==0){
                digit=5;
            }
            result=result+digit*decimalPlace;
            decimalPlace=decimalPlace*10;
            n=n/10;
        }
        return result;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	Solution obj;
    	cout<<obj.convertFive(n)<<endl;
    }
}
// } Driver Code Ends