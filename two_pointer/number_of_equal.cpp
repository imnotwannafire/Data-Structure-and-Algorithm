// Cho 2 mang A B có n, m phần tử
// Dem so cap i, j sao cho A[i]=B[j]
#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m;
    cin>>n>>m;
    vector<int> A(n,0),B(m,0);
    for(auto &x:A)
    {
        cin>>x;
    }
    for(auto &x:B)
    {
        cin>>x;
    }
    int ans=0;
    int ptr1 = 0; // Con tro 1 tren day A
    int ptr2 = 0; // Con tro 2 tren day B
    while(ptr1<n && ptr2<m)
    {
        if(A[ptr1]==B[ptr2])
        {
            int dem1 = 0;
            while(A[ptr1]==B[ptr2])
            {
                dem1++;
                ptr1++;
            }
            int dem2=0;
            while(A[ptr1-1]==B[ptr2])
            {
                dem2++;
                ptr2++;
            }
            ans+= 1ll * dem1*dem2;
        }
        else if(A[ptr1]<B[ptr2]) ptr1++;
        else ptr2++;

    }


    cout<<ans<<' ';

    return 0;
}
