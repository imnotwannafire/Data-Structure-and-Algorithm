// Cho truoc N dinh, M canh va danh sach canh
// Xay dung ma tran ke
#include<bits/stdc++.h>
using namespace std;
int n, m;
int a[100][100];
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>> m;
    for(int i = 0; i< m; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x][y] = 1;
        a[y][x] = 1;
    }
    for(int i = 1; i<=n; i++)
    {
        for(int j = 1;j<=n; j++)
        {
            cout<< a[i][j]<<" ";
        }
        cout << endl;
    }


}
