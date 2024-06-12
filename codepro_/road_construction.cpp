#include<bits/stdc++.h>
#define int long long
using namespace std;


int32_t main()
{
	int n;
	cin>>n;
	vector<vector<int>> land(n,vector<int>(n));
	for(vector<int> &x:land)
	{
		string s;
		cin>>s;
		for(int i=0; i<n; i++)
		{
			x[i] = s[i]-'0';
		}
	}

	vector<vector<int>> dp(n, vector<int>(n,0));
	// Khoi tao hai canh dau
	for(int i=1; i<n; i++)
	{
		dp[0][i] = dp[0][i-1]+land[0][i];
	}
	for(int i=1; i<n; i++)
	{
		dp[i][0] = dp[i-1][0]+land[i][0];
	}

	for(int i=1; i<n; i++)
	{
		for(int j=1; j<n ;j++)
		{
			dp[i][j] = min(dp[i-1][j]+land[i][j], dp[i][j-1]+land[i][j]);
		}
	}

	cout<<dp[n-1][n-1];

}
