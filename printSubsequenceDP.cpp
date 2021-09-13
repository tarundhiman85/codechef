// { Driver Code Starts
// Counts Palindromic Subsequence in a given String
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#define mod 1000000007
class Solution {

public:
    int dp[1000][1000];

    long long int countpalindrome(string &s, int i, int e) {
        if (i > e)
            return 0;
        if (i == e)
            return dp[i][e] = 1;
        if (dp[i][e] != -1)
            return dp[i][e];
        else if (s[i] == s[e])
            return dp[i][e] = (countpalindrome(s, i + 1, e) % mod + countpalindrome(s, i, e - 1) % mod + 1 + mod) % mod;
        else
            return dp[i][e] = (countpalindrome(s, i + 1, e) % mod + countpalindrome(s, i, e - 1) % mod - countpalindrome(s, i + 1, e - 1) % mod + mod) % mod;
    }
    long long int countPS(string str)
    {

        memset(dp, -1, sizeof(dp));
        return countpalindrome(str, 0, str.size() - 1) % mod;
    }

};

// { Driver Code Starts.
// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        Solution ob;
        long long int ans = ob.countPS(str);
        cout<<ans<<endl;
    }
}  // } Driver Code Ends