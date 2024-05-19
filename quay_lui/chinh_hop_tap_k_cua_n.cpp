#include<bits/stdc++.h>
using namespace std;

#define int long long
int n, k, X[100];
void in()
{
    for(int i = 1; i<= k; i++)
    {

        cout<<X[i];
    }
}

void Try(int i)
{
    for(int j = 1; j<=n; j++)
    {
        X[i] = j;
        if(i==k)
        {
            in();
            cout<< endl;
        }
        else Try(i+1);
    }
}

int32_t main()
{
    cin >> n >> k;
    Try(1);
    return 0;
}
