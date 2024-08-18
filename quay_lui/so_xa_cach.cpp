// So nguyen duong co N chu so (2<N<9)
// So xa cach la so co N chu so, khong co so 0, hieu 2 so lien tiep khac 1, cac so chi xuat hien 1 lan
#include<bits/stdc++.h>
using namespace std;
#define int long long
int n, x[100];
bool used[10];


void Try(int i)
{
    for(int j=1; j<=n; j++)
    {

        if(!used[j]&&abs(j-x[i-1])!=1)
        {
            x[i] = j;
            used[j] = true;
            if(i == n)
            {
                for(int u=1; u<=n; u++)
                {
                    cout<<x[u]<<' ';
                }
                cout<<endl;
            }
            else Try(i+1);
            used[j]=false;
        }
    }

}
int32_t main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n;
    Try(1);
    return 0;
}
