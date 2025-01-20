#include <bits/stdc++.h>
using namespace std;
#define int long long
int S, E1, E2;
int ans1, ans2;
void InputData()
{
	cin >> S >> E1 >> E2;
}
int countFactor(int num)
{
	int cnt=0;
	for(int i=1;i<sqrt(num)+1; i++ )
	{
		if(num%i==0)
		{
			if(pow(i,2)==num)cnt++;
			else cnt+=2;
		}
	}
	return cnt;
}
int32_t main()
{
	InputData();

	queue<int> q;
	set<int> st;
	q.push(S);
	st.insert(S);
	int step = 0;
	bool flag1=false, flag2=false;
	while(!q.empty())
	{
		int qsize = q.size();
		while(qsize--)
		{
			int cur = q.front();
			// cout<<"cur: "<<cur<<endl;
			q.pop();
			if(cur==E1)
			{
				ans1 = step;
				flag1= true;
			}
			if(cur==E2)
			{
				ans2 = step;
				flag2 = true;
			}
			if(flag1&&flag2)
			{
				break;
			}
			int curfactor = countFactor(cur);


			for(int i=0; i<4; i++)
			{
				for(int k=0; k<=9; k++)
				{
					string s = to_string(cur);
					s[i]='0'+k;
					int num = stoi(s);
					// cout<<"num: "<<num<<endl;
					if(num<1000||num>9999||st.count(num)==1)continue;
					int factor = countFactor(num);
					if(abs(factor-curfactor)>1) continue;

					q.push(num);
					st.insert(num);
				}
			}
		}
		step++;
	}

	cout << ans1 << '\n';
	cout << ans2 << '\n';
	return 0;
}
