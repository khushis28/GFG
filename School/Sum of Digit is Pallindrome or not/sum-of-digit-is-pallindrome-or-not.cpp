//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
        // code here
        
        int digitSum(int n){
            int sum=0;
            while(n>0){
                int digit = n%10;
                sum=sum+digit;
                n=n/10;
            }
            return sum;
        }
        
        bool isPalindrome(int N){
            int n=N;
            int reverse =0;
            while(n>0){
                int d=n%10;
                reverse=(reverse*10)+d;
                n=n/10;
            }
            if(N==reverse){
                return true;
            }
            else{
                 return false;
            }
        }
        
        int isDigitSumPalindrome(int n) {
         int sum = digitSum(n);
        if(isPalindrome(sum)){
            return 1;
        }
        else{
            return 0;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

// } Driver Code Ends