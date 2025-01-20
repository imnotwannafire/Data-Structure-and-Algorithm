#include<bits/stdc++.h>
using namespace std;
int f[1000];
int fibo(int n)
{
    cout<<n<<' ';
    if(n==1||n==2) return 1;
    if(f[n]!=-1) return f[n];
    f[n] = fibo(n-1)+fibo(n-2);
    return f[n];

}
int main()
{
    int n;
    cin>>n;
//    f[1]=1;
//    f[2]=1;
    for(int i=1; i<=n; i++)f[i]=-1;
//    for(int i=3; i<=n; i++)
//    {
//        f[i]=f[i-1]+f[i-2];
//    }
    cout<< fibo(n);
//    cout<<f[n];
    return 0;
}
