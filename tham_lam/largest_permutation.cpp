// 1 mang gom cac so tang dan tu 1, cac phan tu trong mang la unique
// cho phep swap k lan
// tim ra so lon nhat co the sau khi hoan vi toi da k lan
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, k;
    cin>>n>>k;
    vector<int> a(n+1);
    vector<int> v;
    vector<int> pos(n+1);
    cout<<n<<' '<<k<<endl;
    for(int i = 1; i<=n; i++ )
    {
        cin >> a[i];
        pos[a[i]] = i;
        if(a[i]!=n-i+1)
        {
            v.push_back(a[i]); // luu lai cac so khong dung vi tri lon nhat
        }

    }
    for(int i = 1; i<=n; i++)
    {
        cout<<"array a: "<<a[i]<<endl;
        cout<<"pos: "<<pos[a[i]] <<endl;
    }
    sort(v.begin(), v.end(), greater<int>());
    for(int i = 0; i< v.size(); i++)
    {
        if(k==0) break;
        int x = v[i], pos1 = pos[x];
        int y = a[n-x+1];
        int pos2=pos[y];
        if(pos1!=pos2)
        {
            swap(a[pos1], a[pos2]);
            pos[x] = pos2;
            pos[y] = pos1;
            --k;
        }
    }
    for(int i = 1; i<=n; i++)
    {
        cout<<a[i]<<' ';;
    }
}

