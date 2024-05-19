#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int X[100], n;
int daxet[100];
void in(){
    for(int i = 1; i<=n; i++)
    {
        cout<< X[i];
    }
}
void Try(int i)
{

    for(int j = 1; j<=n; j++)
    {
        // kiem tra xem co the gan j cho X[i] duoc hay khong
        if(daxet[j] == 0)
        {
            X[i] = j;
            daxet[j] = 1;
            if(i == n)
            {
                in();
                cout<< endl;
            }else Try(i+1);
            // bo ghi nhan backtrack
            daxet[j] = 0;
        }
    }
}
int main()
{
    cin >> n;
    memset(daxet,0, sizeof(daxet));
    Try(1);
    return 0;

}
