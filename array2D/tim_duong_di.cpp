// Tim duong di tu o [s,t] den vi tri [u,v] trong 1 ma tran MxN
// 2 o thong voi nhau khi co chung canh va bang 1
// Cho ma tran nhi phan M hang N cot gom cac so khong va 1
// Su dung ky thuat di chuyen LOANG tren mang 2 chieu
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int n,m,s,t,u,v;
int a[100][100];
void xuat(int a[][100])
{
    cout<<"ma tran MxN"<<endl;
    for(int i=0;i<n; i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
void nhap()
{
    cin >> n >>m;
    cout << m << " "<<m;
    cin >> s >>t>>u>>v;
    cout << s<<" "<<t<<" "<<u<<" "<<v;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0; j<m; j++)
        {
           cin>>a[i][j];
        }
    }
    xuat(a);
}


// so luong cac di chuyen xung quanh 1 o
// thu tu di chuyen tu trai qua phai, tu tren xuong duoi
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0,-1,1,0};

void Loang(int i, int j)        //den o [i][j] va danh dau visited
{
    a[i][j] = 0;                //Di qua o nao thi danh dau o day = 0
    for(int k = 0; k<4;k++)
    {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1>=0 && i1<n && j1 >=0 && j1<m && a[i1][j1])
        {
            Loang(i1,j1);
        }
    }


}
int main()

{
    nhap();
    Loang(s,t);
    // Neu den duoc u,v thi a[u,v] = 0;
    if(a[u][v] == 0)
    {
        cout<< "YES";
    }
    else cout<< "NO";
    return 0;
}
