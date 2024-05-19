// Cho ma tran nxn, cac o di duoc co gia tri = 1, cac o khong di duoc co gia tri = 0
// Tim duong di tu vi tri (a,b) den vi tri (n,n)
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int a[100][100];        //luu ma tran duong di
int n;
string s = "";            // Xau chua dap an duong di
void Try(int i, int j)
{
    if(i==n && j == n)
    {
        cout<<s<<endl;
    }
    //gan nuoc di tiep theo tu vi tri i, j
    if(i+1<=n && a[i+1][j]==1)
    {
        s+='D';
        a[i+1][j] = 0; // Danh dau da di roi
        Try(i+1, j);
        s.pop_back();  // xoa nuoc di cuoi cung
        a[i+1][j] = 1; // Bo ghi nhan
    }
    if(j+1<=n && a[i][j+1]==1)
    {

        s += 'R';
        a[i][j+1] = 0;
        Try(i,j+1);
        s.pop_back();
        a[i][j+1]=1;
    }

}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n;
    for(int i = 1; i<= n;i++)
    {
        for(int j = 1; j<=n; j++)
        {
            cin >> a[i][j];
        }
    }
    Try(1,1);
}
