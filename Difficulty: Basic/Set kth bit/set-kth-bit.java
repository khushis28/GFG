// User function Template for Java
class Solution {
    static int setKthBit(int n, int k) {
        // code here
        int mask = 1 << k;
        int ans = n | mask;
        return ans;
    }
};