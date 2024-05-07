// cho n bo phim va thoi gian bat dau, ket thuc cua moi bo phim
// so luong phim xem duoc toi da la bao nhieu

//Solution: sap xep theo thoi gian ket thuc cua moi bo phim
#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int>a, pair<int,int>b)
{
    return a.second<b.second;
}
int main()
{
    int n; cin>>n;
    pair<int, int> a[n];
    for(int i = 0; i<n;i++)
    {
        cin >> a[i].first>>a[i].second;
    }
    sort(a, a+n, cmp);
    int ans = 1;
    int end_time = a[0].second;
    for(int i = 1; i<n;i++)
    {

        if(a[i].first >=end_time)
        {
            ++ans;
            end_time = a[i].second;
        }
    }
    cout<<ans<<endl;
    return 0;
}
