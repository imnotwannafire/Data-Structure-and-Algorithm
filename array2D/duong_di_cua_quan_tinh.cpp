// Tren 1 ban co vua NxN. Tren ban co se co o trong (=0) va co vat can (=1). Quan tinh di chuyen vao cac o trong, khong di duoc vao cac o co vat can
// quan tinh di chuyen tren duong cheo
// Xac dinh so luong o tren ban co ma quan tinh co the di chuyen toi.
// Vi tri ban dau cua tinh la (S,T)
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,s,t;
int a[100][100];
int dem = 0;
void xuat(int a[][100])
{
    cout<<"ma tran NxN"<<endl;
    for(int i=0;i<n; i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
void nhap()
{
    cin >> n;
    cout << n;
    cin >> s >>t;
    cout << s<<" "<<t;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0; j<n; j++)
        {
           cin>>a[i][j];
        }
    }
    xuat(a);
}


// so luong cac di chuyen cua quan tinh la 4 o duong cheo
//
int dx[4] = {-1, -1, 1, 1};
int dy[4] = {-1,1,-1,1};

void Loang(int i, int j)        //den o [i][j] va danh dau visited
{
    a[i][j] = 1;                //Di qua o nao thi danh dau o dau = 1
    ++dem;
    for(int k = 0; k<4;k++)
    {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1>=0 && i1<n && j1 >=0 && j1<n && a[i1][j1]==0)
        {
            Loang(i1,j1);
        }
    }


}
int main()
{
    nhap();
    Loang(s,t);
    cout<<dem;
}
