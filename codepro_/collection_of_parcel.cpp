#include<bits/stdc++.h>
using namespace std;
#define int long long
int n;
vector<int> A(2), B(2);
vector<vector<int>> locate;
int calDis(vector<int> a, vector<int> b)
{
	return abs(a[0]-b[0]) + abs(a[1]-b[1]);
}

int32_t main()
{
	cin>>n;
	cin>>A[0]>>A[1];
	cin>>B[0]>>B[1];
	for(int i=0; i<n; i++)
	{
		int x, y;
		cin>>x>>y;
		locate.push_back({x,y});
	}
	int ans = INT_MAX;
	// Generate all combination
	// Truck A:1 Truck B:0
	int num = 1<<n;
	for(int i=0; i<num; i++)
	{
		vector<int> wayA;
		vector<int> wayB;
		for(int j=0; j<n; j++)
		{
			if((i & (1<<j)))
			{
				wayA.push_back(j);
			}
			else // ==0
			{
				wayB.push_back(j);
			}
		}
		// Generate all the order of way A, way B
		// Calculate on way A
		int totalCostA = INT_MAX;
		int totalCostB = INT_MAX;
		int totalparA = wayA.size();
		int totalparB = wayB.size();
		int curPackA = 0;
		int curCostA = 0;
		int curPackB = 0;
		int curCostB = 0;
		do{
			curPackA = 0;
			curCostA = 0;

			if(totalparA>0)
			{
				curCostA = calDis(A, locate[wayA[0]])*(1+curPackA);
				curPackA++;
				for(int j=0; j<totalparA-1; j++)
				{
					int dist = calDis(locate[wayA[j]], locate[wayA[j+1]]);
					curCostA += (dist*(1+curPackA));
					curPackA++;
				}
				//from last parcel to office A
				curCostA += calDis(locate[wayA[totalparA-1]], A) *(1+curPackA);
			}
			//from office A to first parcel

			totalCostA = min(curCostA, totalCostA);
			// cout<<"Total cost A"<<totalCostA<<endl;
		}while(next_permutation(wayA.begin(), wayA.end()));

		do{
			curPackB = 0;
			curCostB = 0;

			//from office A to first parcel
			if(totalparB>0)
			{
				curCostB = calDis(B, locate[wayB[0]]) *(1+curPackB);
				curPackB++;
				for(int j=0; j<totalparB-1; j++)
				{
					int dist = calDis(locate[wayB[j]], locate[wayB[j+1]]);
					curCostB += (dist*(1+curPackB));
					curPackB++;
				}
				curCostB += calDis(B, locate[wayB[totalparB-1]]) *(1+curPackB);
			}
			totalCostB = min(curCostB, totalCostB);
			// cout<<"Total cost B"<<totalCostB<<endl;
		}while(next_permutation(wayB.begin(), wayB.end()));
		int totalCost = totalCostA+totalCostB;
		ans = min(totalCost, ans);
	}
	cout<<ans;
	return 0;
}
