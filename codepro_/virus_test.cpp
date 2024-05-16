#include <bits/stdc++.h>
using namespace std;
#define int long long
bool cmp(int a, int b)
{
	return a>b;
}
void test_case(vector<int>& a, vector<int>& b,vector<int>& sub, int n , int m, int& ans)
{
	int cnt = 0;
	for(int i = 0; i<= n-m; i++)
	{
		vector<int> c(a.begin()+i, a.begin()+i+m);
		sort(c.begin(), c.end(),cmp);
		vector<int> sub1;
		for(int i = 0; i < m-1; i++ )
		{
			sub1.push_back(c[i] - c[i+1]);
		}
		if(sub1==sub)cnt++;

	}
	ans = cnt;

}
int32_t main()
{
	int n,m;
	cin >> n >> m;
	vector<int> a(n);
	vector<int> b(m);
	for(auto &x:a)
	{
		cin >> x;
	}
	for(auto &x:b)
	{
		cin >> x;
	}

	// Sort virus in decrease order
	sort(b.begin(), b.end(), cmp);
	// Sub between 2 adjacent elemnts in virus => in order to compare with variants virus
	vector<int> sub;
	for(int i = 0; i < m-1; i++ )
	{
		sub.push_back(b[i] - b [i+1]);
	}
	int ans = 0;
	test_case(a,b,sub,n,m, ans);
	cout << ans;

	return 0;
}
