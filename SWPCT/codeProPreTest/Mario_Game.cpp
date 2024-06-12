#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int N;//Number of mushrooms
int P[150000 + 10];//Mushroom value

void InputData(){
	cin >> N;
	for (int i = 0; i < N; i++){
		cin >> P[i];
	}
}

int solve()
{
	// Luot an cuoi cung la + hay -
	vector<int> ketThucDuong(N,0);
	vector<int> ketThucAm(N,0);

	// khoi tao gia tri ban dau
	ketThucDuong[0] = max(0, P[0]);
	ketThucAm[0] = 0;
	// Xet tung luot an nam tu dau den cuoi
	for(int i=0; i<N; i++)
	{
		ketThucDuong[i] = max(ketThucDuong[i-1], ketThucAm[i-1]+P[i]);
		ketThucAm[i] = max(ketThucAm[i-1], ketThucDuong[i-1]-P[i]);
	}
	int max_duong = *max_element(ketThucDuong.begin(), ketThucDuong.end());
	int max_am = *max_element(ketThucAm.begin(), ketThucAm.end());
	int ans = max(max_duong, max_am);
	return ans;
}

int main(){
	int ans = -1;

	InputData();			//	Input function

	ans = solve();



	cout << ans << endl;	//	Output answer
	return 0;
}
