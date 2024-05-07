// Cho mang n la danh sach cac gia ve
// mang m la danh sach gia tien nguoi mua san sang tra
// ghep cap giua gia ve va gia tien khach hang san sang tra
// sao cho gia ve khong duoc cao hon gia tien va sat gia tien nhat
//Dung multiset vi multiset ho tro phep xoa co do phuc tap OlogN
#include<bits/stdc++.h>

using namespace std;

int main()
{

    multiset<int> ms;
    int n, m;
    cin >> n>>m;
    for(int i = 0;i<n;i++)
    {
        int x; cin>>x;
        ms.insert (x);
    }
    for(int i = 0; i<m; i++)
    {
        int x;
        cin >> x;
        auto it = ms.upper_bound(x);
        if(it !=ms.begin())
        {
            --it;
            cout<<*it<<endl;
            ms.erase(it);
        }
        else{
            cout<<-1;
        }

    }
}
