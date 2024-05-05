#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n = 1000000;
bool prime[1000001];        //mang danh dau
int p[1000001];
void sang()
{
    for(int i = 0;i<n;i++)
    {
        prime[i] = true;
    }
    prime[0] = false;
    prime[1] = false;
    for(int i = 2; i<=sqrt(n);i++)
    {
        if(prime[i]==true)
        {
            //loai cac boi cua i<=n
            for(int j=i*i;j<=n;j+=i)
            {
                prime[j] = false;
            }
        }
    }
}

void sang2()
{
    for(int i = 0;i<=n;i++)
    {
        p[i] =  i;
    }
    for(int i = 2;i<=sqrt(n);i++)
    {
        if(p[i]==i)
        {
            for(int j = i*i;j<=n;j+=i)
            {
                p[j] = i;
            }
        }
    }

}
int main()
{
    sang();
    sang2();
    for(int i = 0; i<=100; i++)
    {

        cout<<i<< ' '<<p[i]<<endl;
    }
}
