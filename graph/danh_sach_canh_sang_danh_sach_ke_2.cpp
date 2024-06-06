// chuyen danh sach canh sang danh sach ke co huong
// cho n va m tuong ung voi so luong dinh va canh cua do thi
// cac dong cua do thi duoc danh so tu 1 den n
// M dong tiep theo chua dinh u,v tuong ung voi 1 canh cua do thi
#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m;
    cin>>n;
    cin>>m;
    scanf("\n");
    cout<< n<<' '<<m<<endl;
    vector<vector<int>> ds_ke(n+1);
    for(int i=0; i<m; i++)
    {
        int x, y;
        cin>>x>>y;
        //cout<<x<<' ' <<y<<endl;
        ds_ke[x].push_back(y);

    }
    for(int i=1; i<=n; i++)
    {
        cout<<i<<" : ";
        sort(ds_ke[i].begin(), ds_ke[i].end());
        for(int j=0; j<ds_ke[i].size();j++)
        {
            cout<< ds_ke[i][j]<< ' ';
        }
        cout<<endl;
    }
}
