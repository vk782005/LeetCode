class Solution {
public:

    int fdp(int n , vector<int>&dp){
        if(n<=1){return n;}

        if(dp[n]!=-1){return dp[n];}

        dp[n] = fdp(n-1,dp) + fdp(n-2,dp);

        return dp[n];
    }
    int fib(int n) {
        vector<int>dp(n+1,-1);
        return fdp(n,dp);
    }
};