#include<bits/stdc++.h>
using namespace std;
#define int long long
int n, x[100];
int a[100];
int ok = 0;
int s=0;

void Try(int i_pos, int try_from, int sum)
{
    if(ok) return;
   for(int j = try_from; j<=n ; j++)
   {
       if(sum+a[j]<=s)
       {
           x[i_pos] = a[j];
           sum += a[j];
           if(sum==s) ok = 1;
           else Try(i_pos+1, j+1, sum);
           sum -= a[j];
       }
   }

}
int32_t main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        s += a[i];
    }
    s = s/2;
    Try(1,1,0);
    if(ok) cout<<"1";
    else cout<< "0";
    return 0;
}
