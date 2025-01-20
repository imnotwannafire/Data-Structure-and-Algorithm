// Su dung quy hoach dong f[s][i]: cach de tao ra tong s khi xet den phan tu a[i]
#include<bits/stdc++.h>
using namespace std;
#define maxn 102
#define maxa 1000005
#define MOD 1000000007
int f[maxa], g[maxa];
int a[maxn];
int n, S;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> S;
    for(int i=1; i<=n ; i++)
    {
        cin >> a[i];
    }
    g[0]=1;
    for(int i=1; i<=n; i++)
    {
        for(int s=0; s<=S;s++)
        {
            f[s]=g[s];
            if(s>=a[i])
            {
                f[s]=(f[s]+f[s-a[i]])%MOD;
            }
        }
        for(int s=0; s<=S; s++)
        {

            g[s]=f[s];
        }
    }
    cout<< f[S];
    return 0;
}
