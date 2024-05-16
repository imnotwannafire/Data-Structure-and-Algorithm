// co n soi day voi do dai khac nhau ai
// can cat thanh k soi day
// Do dai toi ta dc phep cat tren moi soi day la bao nhieu

#include<bits/stdc++.h>
using namespace std;

#define int long long
bool check(int a[], int n, int k, double len)
{
    int dem = 0;
    for(int i = 0; i< n; i++)
    {
        dem+= (int)a[i]/len;
    }
    return dem >=k;
}
int32_t main()
{
    int n, k;
    cin>>n >> k;
    int a[n];
    for(int &x:a)
    {
        cin >> x;
    }
    double left = 0;
    double right = 9e18;
    double res = -1;
    for(int i = 1; i<=100; i++)
    {
        double mid = (left+right)/2;
        if(check(a,n,k,mid))
        {
            res = mid;
            left = mid;
        }
        else
        {
            right = mid;
        }
    }
    cout << fixed<< setprecision(6)<<res;
}
