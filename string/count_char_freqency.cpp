#include<bits/stdc++.h>
using ll = long long;
using namespace std;
int main(){
    //Dem tan suat xuat hien cua 1 ky tu trong xau s
    //Dem ky tu xuat hien bao nhieu lan
    //Phuong phap 1: Map
    string s = "abcaskffaafcnad11amf";
    cout<<"DUNG MAP"<<endl;
    map<char, int> mp;
    for(char x:s)
    {
        mp[x]++;

    }
    for(auto it : mp)
    {
        cout<<it.first<<' '<< it.second<<endl;
    }
    cout<<"DUNG MANG DANH DAU"<<endl;

    //Phuong phap 2: mang danh dau
    int cnt[256] = {0};
    for(char  x:s)
    {
        cnt[x]++;
    }
    for(int i=0; i<256;i++)
    {

        if(cnt[i]){
            cout<<(char) i <<' '<<cnt[i]<<endl;
        }
    }


    return 0;
}
