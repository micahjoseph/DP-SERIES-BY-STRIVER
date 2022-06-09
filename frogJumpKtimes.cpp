#include <bits/stdc++.h>

using namespace std;

int solveUtil(int ind, vector<int>& height,vector<int>&dp, int k){
    if(ind==0) return 0;
    
    
    int mmSteps = INT_MAX;
        if(dp[ind]==ind)
        {
        	return dp[ind];
		}
        
    for(int j=1;j<=k;j++){
        if(ind-j>=0){
      int jump = solveUtil(ind-j, height, dp,k)+ abs(height[ind]- height[ind-j]);
            mmSteps= min(jump, mmSteps);
        }
    }
    return dp[ind]= mmSteps;
    
}

int solve(int n, vector<int>& height , int k){
    vector<int>dp(n,-1);
    return solveUtil(n-1, height,dp, k);
}

int main() {

int n,k;
cin>>n>>k;
  vector<int> height(n);
  for(int i=0;i<n;i++)
  {
  	cin>>height[i];
  }
  
   vector<int>dp(n,-1);
 
   
  cout<<solve(n,height,k);
}
