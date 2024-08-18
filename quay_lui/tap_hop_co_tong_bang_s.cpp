#include<bits/stdc++.h>
#define int long long
using namespace std;
int X[100];
int cnt=0;
int n, k, s;
// gia tri phan tu <=n, k phan tu, tong bang s
void Try(int i,int from, int sum)
{
    for(int j=from; j<=n; j++)
    {
        X[i] = j;
        sum+=X[i];
        if(i==k)
        {
            if(sum==s) {
                cout<<sum<<endl;
                cnt ++;
                for(int t=1; t<=k;t++)
                    cout<<X[t]<<' ';
                cout<<endl;
            }

        }
        else{
            Try(i+1, j+1, sum);
        }
        sum -= X[i];
    }

}
int32_t main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> n >> k >>s;
    cout<<n<<' '<<k <<' '<<s<<endl;
    int sum = 0;
    Try(1,1,sum);
    cout<<cnt<<endl;


}
