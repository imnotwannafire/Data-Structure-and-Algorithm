// Cho truoc mang N phan tu, va tong k
// tim cac tap con trong N sao cho tong cua chung bang K
// cac bo so khong duoc lap lai va xuat hien theo thu tu lon dan
// Solution: Xet backtracking theo vi tri can dien va vi tri phan tu bat dau xet


#include<bits/stdc++.h>

using namespace std;
#define int long long
int n, k, X[100], daxet[100];
int a[100];
int sum = 0;
void in()
{
    for(int i = 1; i<=k; i++)
        cout<<X[i];
}
void Try(int i_pos, int try_from)
{

   for(int j = try_from; j<=n ; j++)
   {
       if(daxet[j]==0)
       {
           X[i_pos]= a[j];
           daxet[j]=1;
           sum +=a[j];
           if(sum==k)
           {
               cout<< "[";
               for(int l =1; l<=i_pos; l++)
               {
                   cout<< X[l]<<" ";
               }
               cout<< "] ";
           }
           else Try(i_pos+1,j+1);
           daxet[j] = 0;
           sum -= a[j];
       }
   }

}
int32_t main()
{
    cin >> n >> k;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    memset(daxet, 0, sizeof(daxet));
    sort(a+1,a+1+n);
    Try(1,1);
    return 0;
}
