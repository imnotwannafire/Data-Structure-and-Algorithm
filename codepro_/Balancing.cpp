#include<bits/stdc++.h>
using namespace std;
#define int long long
int n;
vector<vector<int>> v;
int32_t main()
{
	cin>>n;
	v.resize(n,vector<int>(n));
	int target=0;
	vector<int> sumR(n,0);
	vector<int> sumC(n, 0);
	for(int i=0; i<n; i++)
	{

		for(int j=0; j<n; j++)
		{
			int tmp;
			cin>>tmp;
			v[i][j]=tmp;
			sumR[i]+=tmp;
			sumC[j]+=tmp;
		}
	}
	target = max(*max_element(sumR.begin(), sumR.end()), target);
	target = max(*max_element(sumC.begin(), sumC.end()), target);
	int ans=0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			int addRow = target-sumR[i];
			int addCol = target-sumC[j];
			int add = addRow<=addCol?addRow:addCol;
			sumR[i] += add;
			sumC[j] += add;
			ans +=add;

		}
	}
	cout<<ans<<endl;

	return 0;
}
