// Y tuong:
// B1: Tim toa do Xmax, Ymax, Xmin, Ymin cua moi mau
// B2: Xac dinh toa tung o mau duoi dang vector cac pair toa do: mau 1: (0,0), (0,1) ...
// B3: Xet lan luot tung mau. Tai moi lan xet, kiem tra toa do cua mau dang xet xem co nam trong khoang max min cua cac mau con lai hay khong
// Neu nam trong thi no dang to de len mau do, neu khong tuc la ko to de
#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
	int n;
	cin>> n;
	string s;
	// Buoc 1
	// Khoi tao vector  toa do max min cho tung mau 10 mau
	// Toa do chay tu 0 den n-1. Mau nao ko co se luon dc xet min = n, max = -1
	// maxX[mau 1] = maxx
	vector<int> minX(10,n), minY(10,n), maxX(10,-1), maxY(10,-1);
	// Khoi tao vector chua toa do
	vector<vector<pair<int, int>>> color_map(10);
	// Nhap toa do tung mau va thuc hien tinh toan max, min XY
	for(int i=0; i<n; i++)//x - row
	{
		cin>>s;
		for(int j = 0; j<n; j++) //y - collumn
		{
			int color = s[j] - '0'; // mau
			minX[color] = min(minX[color], i);
			maxX[color] = max(maxX[color], i);
			minY[color] = min(minY[color], j);
			maxY[color] = max(maxY[color], j);
			//B2: Nhap toa do x y cua tung mau
			color_map[color].push_back({i,j});
		}
	}

	// Buoc 3: Duyet tung mau
	int ans=0;
	for(int color = 1; color< 10; color++)
	{
		bool isOverlapped = false;
		if(minX[color]==n) continue; // Bo qua cac mau khong duoc to
		for(auto x:color_map[color])	// Duyet tung toa do cua mau color
		{
			// Xet cac toa do day co nam trong khoang cua max, min cua cac mau con lai hay khong
			// neu nam trong thi tuc la no to de len mau day
			// Neu khong nam trong thi no ko bi to de
			for(int color2 = 1; color2 < 10; color2++)
			{
				if(color2==color) continue;
				if(x.first<=maxX[color2] && x.first>=minX[color2] && x.second<=maxY[color2] && x.second>=minY[color2])
				{
					isOverlapped = true;
					break; // khong xet nua
				}
			}
			if(isOverlapped) continue; // chuyen sang mau khac

		}
		if(!isOverlapped) ans++;
	}
	cout<<ans;
}
