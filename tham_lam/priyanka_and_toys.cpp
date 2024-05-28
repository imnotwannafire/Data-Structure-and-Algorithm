// cho danh sach can nang cua cac do vat
// xac dinh so luong container nho nhat de chua toan bo so do
// cac item trong 1 container ko duoc chenh lech nhau qua 4kg
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &x: a)
    {
        cin>>x;
    }

    sort(a.begin(), a.end());
    int ans=1;
    int min_item = a[0];

    for(int i = 1; i< n; i++)
    {
        if(a[i]-min_item<=4) continue;
        else
        {
            ans++;
            min_item=a[i];
        }
    }
    cout<< ans;
    return 0;

}
