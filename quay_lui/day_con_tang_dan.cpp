#include<bits/stdc++.h>

using namespace std;
#define int long long
int n, x[100];
int a[100];

void Try(int i_pos, int try_from)
{

   for(int j = try_from; j<=n ; j++)
   {
       if(a[j]>x[i_pos-1])
       {
           x[i_pos]=a[j];
           if(i_pos>=2)
           {
               for(int u=1; u <= i_pos; u++)
               {
                   cout<<x[u]<<' ';
               }
               cout<<endl;
           }
           Try(i_pos+1, j+1);
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
    }
    Try(1,1);
    return 0;
}
