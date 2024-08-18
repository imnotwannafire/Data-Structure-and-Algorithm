// Cho mang A co N phan tu
// Cho danh sach M thao tac tu 1->M. Moi thao tac thuc hien tang D tren cac phan tu
// A[L] den A[R]
// Thuc hien k lan: moi lan se chon thuc hien cac thao tac tu i den j
// Tinh mang A sau khi thuc hien xong k lan
#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // Nhap mang A
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> A(n+1,0);
    for(int i=1; i<=n; i++)
    {
        cin >> A[i];
    }
    for(int x:A)cout<<x<<' ';
    cout<<endl;
    vector<int> left(m+1,0), right(m+1,0), val(m+1,0); // chua cac thao tac left-right-val
    for(int i=1; i<=m; i++)
    {
        int l, r, v;
        cin >> l>>r>>v;
        left[i] = l;
        right[i]= r;
        val[i] = v;
    }
    for(int i=0; i<=m; i++)
    {
        cout<<left[i]<<' '<<right[i]<<' '<<val[i]<<endl;
    }
    // thuc hien k thao tac
    vector<int> thaotac(m+1,0); // mang chua so lan thuc hien cac thao tac
    vector<int> D(m+1,0); // mang hieu cua mang thao tac
    for(int i=0; i<k; i++)
    {
        int l, r;
        cin>>l>>r;
        D[l]++;
        D[r+1]--;
    }
    // so luong thuc hien cua moi thao tac nhu sau
    for(int i=0; i<=m; i++)
    {
        if(i==0) thaotac[i]=D[i];
        else
        {
            thaotac[i] = thaotac[i-1]+D[i];
        }
    }
    for(int x:thaotac) cout<<x<<' ';
    cout<<endl;
    // mang Q chua gia tri tang len tren moi phan tu cua mang A
    // Result A[i] = A[i]+Q[i]
    vector<int> Q(n+1,0); // ban dau chua phan tu nao tang len nen deu la 0;
    for(int i=0; i<=m; i++)
    {
        Q[left[i]]+= val[i]*thaotac[i]; // gia tri tang len cua moi thao tac * so lan thuc hien thao tac
        Q[right[i]+1]-= val[i]*thaotac[i];
    }
    for(int i=1; i<=n; i++)
    {
        Q[i] = Q[i-1]+Q[i];
    }
    for(int x:Q) cout<<x<<' ';
    cout<<endl;
    // in ra ket qua
    for(int i=1; i<=n; i++)
    {
        A[i] +=Q[i];
        cout<<A[i]<<' ';
    }

    return 0;
}
