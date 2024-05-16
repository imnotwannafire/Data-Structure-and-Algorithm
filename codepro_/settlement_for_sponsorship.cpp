#include<bits/stdc++.h>
using namespace std;
#define int long long
void test_case(vector<int>& a, int n, int &ans)
{
	int max_so_far = INT_MIN;
	int max_ending_here = 0;
	for(int i = 0; i<n;i++)
	{
		max_ending_here +=a[i];
		if(max_ending_here>max_so_far)
		{
			max_so_far = max_ending_here;
		}
		if(max_ending_here <0)
		{
			max_ending_here = 0;
		}
	}
	ans = max_so_far;
}

int32_t main()
{
	int n;
	cin >>n;
	vector<int> a(n);
	for(int &x:a) cin >> x;
	int ans = 0;
	test_case(a,n,ans);
	cout<<ans;
	return 0;
}
