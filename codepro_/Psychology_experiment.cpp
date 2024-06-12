#include<bits/stdc++.h>

#define int long long
using namespace std;
bool cmp(pair<int, int> a, pair<int, int>b)
{
	return a.first<b.first;
}
int32_t main()
{
	int n;
	cin>> n;
	vector<pair<int, int>> v(n);
	map<int, int> mp;
	for(int i = 0; i< n; i++)
	{
		int value;
		cin>>value;
		if(value<0)
		{
			v[i]= make_pair(abs(value), i);
			mp[i] = -1;
		}
		else
		{
			v[i]= make_pair(value,i);
			mp[i] = 1;
		}
	}
	sort(v.begin(), v.end(), cmp);
	// for(auto x: v)
	// {
	// 	cout<<x.first<<' '<<x.second<<endl;
	// }
	// for(auto i:mp) cout<< i.first <<' '<< i.second<<' '<<endl;
	cout<<endl;
	int min_diff=INT_MAX;
	pair<int, int> res;
	for(int i=1; i<n; i++)
	{
		if(mp[v[i].second]==mp[v[i-1].second]) continue;
		int tmp = abs(v[i].first - v[i-1].first);
		if(tmp<min_diff)
		{
			min_diff = tmp;
			res.first = min(v[i].second, v[i-1].second);
			res.second = max(v[i].second, v[i-1].second);
		}
		else if(tmp == min_diff)
		{
			if(min(v[i].second, v[i-1].second) < res.first|| min(v[i].second, v[i-1].second)==res.first&&max(v[i].second, v[i-1].second)<res.second)
			{
				res.first = min(v[i].second, v[i-1].second);
				res.second = max(v[i].second, v[i-1].second);
			}
		}
	}
	cout<<res.first<<' '<<res.second;
	return 0;
}
