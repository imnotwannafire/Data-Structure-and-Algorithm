#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int n, a[100];
int final = 0; //check gia tri cuoi cung
void khoi_tao(){// khoi tao cau hinh dau tien 00000000...
    for(int i = 1; i<=n; i++)
    {
        a[i] = 0;
    }
}
void sinh()
{
    int i = n; // bat dau tu bit cuoi cung
    while (i>=1 && a[i]==1)
    {
        a[i] = 0;
        --i;
    }
    if(i == 0)
    {
        // Day la Cau hinh cuoi cung
        cout<<"final"<<endl;
        final = 1;
    }
    else
    {
        a[i] = 1;
    }
}
int main()
{
    cin >>n;
    while(final==0)
    {
        for(int i = 1; i<= n; i++)
        {
            //if(a[i]==1) cout<<'A';
            //else cout<<'B';
            cout<< a[i];
        }
        cout << endl;
        sinh();
    }

}
