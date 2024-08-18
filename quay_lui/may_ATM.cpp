#include<bits/stdc++.h>
#define int long long
using namespace std;
vector<int> X;
int atm[100];
int ans = 31;
int n,k;
// gia tri phan tu <=n, k phan tu, tong bang s
void Try(int i,int from, int sum)
{
    for(int j=from; j<n; j++)
    {
        if(sum+atm[j]<=k)
        {
            X.push_back(atm[j]);
            sum+=atm[j];
            if(sum==k)
            {
//                cout<<atm[j]<<endl;
                for(int t=0; t<i; t++)
                {
                    cout<<X[t]<<' ';
                }

                cout<<endl;

                ans = ans<X.size()? ans:X.size();

            }
            else{
                Try(i+1, j+1, sum);
            }
            sum -= atm[j];
            X.pop_back();
        }else{
            return;
        }

    }

}
int32_t main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> n>> k;
    for(int i=0; i<n; i++)
    {
        cin>>atm[i];
    }
    int sum = 0;
    sort(atm, atm+n);
    Try(1,0,sum);
    cout<<ans;



}
