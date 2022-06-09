#include<bits/stdc++.h>
int f(int ind,vector<int> &heights, vector<int>&dp)
{
    if(ind==0)
    {
        return 0;
    }
    if(dp[ind]!=-1)
    {
        return dp[ind];
    }
    int left=abs(heights[ind]-heights[ind-1])+f(ind-1,heights,dp);
    int right=INT_MAX;
    if(ind>1)
    {
        right=abs(heights[ind]-heights[ind-2])+f(ind-2,heights,dp);
    }
    return dp[ind]=min(left,right);
}
int frogJump(int n, vector<int> &heights)
{
	vector<int>dp(n+1,-1);
	frogJump(n-1,heights,dp);
	
}
