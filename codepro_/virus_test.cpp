#include<bits/stdc++.h>
using namespace std;
bool check(vector<int> var, vector<int> virus)
{
	int len = var.size();
	sort(var.begin(), var.end());
	for(int i=1; i<len; i++)
	{
		if(var[i]-var[i-1]!=virus[i]-virus[i-1])
		{
			return false;
		}
	}
	return true;
}
void solve()
{
	int n, m;
	cin>>n>>m;
	vector<int> a(n);
	vector<int> b(m);
	for(int& x: a)
	{
		cin >> x;
	}
	for(int& x:b)
	{
		cin>>x;
	}
	sort(b.begin(), b.end());
	// for(int x:b) cout<< x<< ' ';
	// cout<<endl;
	vector<int> tmp;
	int ans=0;
	for(int i=0; i<=n-m; i++)
	{
		tmp.assign(a.begin()+i, a.begin()+i+m);
		// for(int x:tmp) cout<< x<< ' ';
		// cout<<endl;
		if(check(tmp,b)) ans++;
	}
	cout<< ans;
}


int main()
{
	solve();
	return 0;
}
