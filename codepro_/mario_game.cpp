#include<bits/stdc++.h>
// #define int long long
using namespace std;


void solve()
{
	int n;
	cin >> n;
	vector<int> p(n);
	for(int&x: p)
	{
		cin >> x;
	}
	vector<int> ketThucDuong(n,0); //ket thuc o luot an le, lan an cuoi la +
	vector<int> ketThucAm(n,0); //ket thuc o luot an chan, lan an cuoi la -
	ketThucDuong[0] = max(0, p[0]);
	for(int i=1; i<n; i++)
	{
		ketThucDuong[i] = max(ketThucDuong[i-1],ketThucAm[i-1]+p[i]);			// lua chon ket thuc o luot i-1 hoac an them
		ketThucAm[i] = max(ketThucAm[i-1], ketThucDuong[i-1]-p[i]);
	}
	int ans = -1;

	int ans1 = max(*max_element(ketThucDuong.begin(), ketThucDuong.end()),*max_element(ketThucAm.begin(), ketThucAm.end())) ;
	cout<<ans1;
}

int32_t main()
{
	solve();

	return 0;
}
