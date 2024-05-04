#include<bits/stdc++.h>
using ll = long long;
using namespace std;

int main(){
    //tim cac ky tu xuat hien o ca 2 xau va sap xep theo thu tu tang dan
    string s = "asdfafgbva";
    string t = "askfbjmxczbc";
    //Dung mang danh dau
    int cnt1[256]={0};
    int cnt2[256]={0};
    for(char x:s)
    {
        cnt1[x] = 1;

    }
    for(char x:t)
    {
        cnt2[x] = 1;
    }
    for(int i = 0; i< 256; i++)
    {
        if(cnt1[i]&&cnt2[i]){
            cout<<(char)i;
        }
    }
    return 0;
}
