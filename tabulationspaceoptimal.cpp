#include<bits/stdc++.h>
using namespace std;
int main()
{
	int prev2=0;
	int prev1=1;
	
	int n=5;
	for(int i=2;i<=n;i++)
	{
		int current=prev2+prev1;
		prev2=prev1;
		prev1=current;
		
		
	}
	cout<<prev1;
}
