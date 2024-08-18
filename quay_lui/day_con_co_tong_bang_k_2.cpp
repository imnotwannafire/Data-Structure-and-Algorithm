#include<bits/stdc++.h>
#define int long long
using namespace std;
int X[100];
int A[100];
int n,k;
// gia tri phan tu <=n, k phan tu, tong bang s
void Try(int i,int from, int sum)
{
    for(int j=from; j<n; j++)
    {
        X[i] = A[j];
        sum+=X[i];
        if(sum==k)
        {
            for(int t=1; t<=i; t++)
                cout<<X[t]<<' ';
            cout<<endl;

        }
        else{
            Try(i+1, j+1, sum);
        }
        sum -= X[i];
    }

}
int32_t main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cin >> n>> k;
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }
    int sum = 0;
    sort(A, A+n);
    Try(1,0,sum);



}
