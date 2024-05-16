#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
	vector<int> boxType{1,5,10,50,100,500,1000,3000,6000,12000};
	int goods;
	cin >> goods;
	vector<int> boxQuantity(10);
	for(auto &x:boxQuantity)
	{
		cin >> x;
	}
	int totalGoods = 0;
	for(int i = 0; i < 10; i++) totalGoods += boxType[i]*boxQuantity[i];
	int overGoods=totalGoods - goods;
	int selectBox = 9;
	while(overGoods !=0)
	{

		int boxCount = min(overGoods/boxType[selectBox], boxQuantity[selectBox]);
		overGoods -= boxCount * boxType[selectBox];
		boxQuantity[selectBox] -= boxCount;
		--selectBox;
	}
	int ans = 0;
	for(auto x:boxQuantity)
	{
		ans += x;
	}
	cout<< ans<<endl;
	for(auto x:boxQuantity)
	{
		cout << x<< " ";
	}
	return 0;


}
