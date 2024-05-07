// Biet thoi gian den va di cua n khach hang trong mot nha hang
// So luong khach hang o 1 thoi diem nhieu nhat la bao nhieu
// n so luong khach hang
// voi moi khach hang co a, b tuong ung thoi gian den va thoi gian di
// output: so luong khach hang toi da
// solution: tai moi thoi diem den danh dau la +1, thoi diem di danh dau la -1
// tai tung thoi diem: xet gia tri tong cua cac so danh dau. tim max
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int ans = 0;
    int n;
    cin>>n;
    vector<pair<int, int>> v;
    for(int i = 0; i<n;i++)
    {
        int a, b;
        cin >> a>>b;
        v.push_back({a,1});
        v.push_back({b,-1});
    }
    sort(v.begin(), v.end());
    int cnt = 0;
    for(auto x: v)
    {
        cnt +=x.second;
        ans = max(ans, cnt);
    }
    cout << ans;
    return 0;
}
