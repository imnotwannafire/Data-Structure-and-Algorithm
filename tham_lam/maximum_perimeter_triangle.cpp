// Chon 3 canh trong 1 array de tao thanh 1 tam giac co chu vi lon nhat
// Chon tam giac co canh dai nhat la lon nhat (neu 2 tam giac co cung chu vi)
// Chon tam giac co canh nho nhat la lon nhat
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool Check(int a, int b, int c)
{
    return a+b>c && b+c>a && a+c>b;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin>>n; // so canh cho ban dau
    vector<int> a(n); // vector chua cac canh
    for(int &x:a) cin>>x;
    ll max_peri = 0;
    int x = -1;
    int y = -1;
    int z = -1;
    sort(a.begin(), a.end(), greater<int>());
    for(int x:a) cout<<x<<' ';
    cout<<endl;
    for(int i=0; i< n-2; i++)
    {
        for(int j = i+1; j<n-1; j++)
        {
            for(int k = j+1; k<n; k++)
            {
                ll temp;
                if(Check(a[i], a[j], a[k]))
                {
                    temp = (ll) a[i]+a[j]+a[k];

                    if(temp>max_peri)
                    {

                        max_peri = temp;
                        cout<<"max peri "<<max_peri<<' ';
                        x = a[i];
                        y = a[j];
                        z = a[k]; // luu lai 3 canh cua tam giac co chu vi lon nhat
                        cout<<x<<' '<<y<<' '<<z<<endl;
                    }
                    else if(temp == max_peri) //neu co 2 tam giac co chu vi bang nhau
                    {
                        cout<<"temp = max_peri"<<endl;
                        if(x<a[i])
                        {
                            x=a[i];
                            y=a[j];
                            z=a[k];
                        }
                        else if(x==a[i]&&a[k]>z)
                        {
                            x=a[i];
                            y= a[j];
                            z= a[k];
                        }
                    }
                }


            }
        }
    }
    if(x==-1) cout<<"-1";
    else cout<<x<<' '<<y<<' '<<z;

}
