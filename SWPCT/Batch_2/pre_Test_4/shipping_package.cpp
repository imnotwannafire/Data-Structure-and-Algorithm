#include<bits/stdc++.h>
#define int long long
using namespace std;
int n, k;
vector<int> a;
bool check(int mid)
{
    int day = 1;
    int w =0;
    for(int i=0;i<n; i++)
    {
        w += a[i];
        if(w>mid)
        {
            day++;
            w = a[i];
        }
        else if(w==mid)
        {
            day++;
            w=0;
        }
    }
//    cout<<mid<<' '<<day<<endl;
    return day<=k;
}
int32_t main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    int ans = 0;
   cin >> n >> k;
   for(int i=0; i<n; i++)
   {
       int w;
       cin >> w;
       a.push_back(w);
   }
   int l = *max_element(a.begin(), a.end());
   int r = accumulate(a.begin(), a.end(),0);
   while(l<=r)
   {
       int mid = l+(r-l)/2;
       if(check(mid))
       {
           ans = mid;
           r = mid -1;
       }
       else{
        l=mid+1;
       }
   }
   cout<<ans;
   return 0;

}
