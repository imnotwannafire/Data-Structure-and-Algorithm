#include<bits/stdc++.h>
using namespace std;
#define maxn 1000005
#define MOD 1000000007
int f[maxn];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    //base case
    f[0] = 1; //luon co 1 cach de tao ra tong bang 0 do la khong tung xuc xac lan nao
    for(int s = 1; s<=n; s++)
    {
        // Tong cac trang thai truoc no
        for(int j=1; j<=6; j++)
        {
            if(j<=s)
            {

                f[s] = (f[s]+f[s-j])%MOD;
            }
        }
    }
    cout<<f[n];
}
