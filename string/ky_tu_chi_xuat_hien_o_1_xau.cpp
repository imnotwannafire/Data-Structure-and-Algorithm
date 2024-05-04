#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    string s1 = "asdffghfs";
    string s2 = "bhdskfjvcx";
    int cnt1[256]={0};
    int cnt2[256]={0};
    for(char x:s1){
        cnt1[x]=1;
    }
    for(char x:s2){
        cnt2[x]=1;
    }
    //Chi xuat hien o xau s2 ma khong xuat hien o xau s1
    cout<<"Chi xuat hien o xau s2 ma khong xuat hien o xau s1"<<endl;
    for(int i=0;i<256;i++){
        if((!cnt1[i])&&cnt2[i])
        {
            cout<<(char)i<<" ";
        }
    }
    cout<<endl;
    //Chi xuat hien o S1 ma khong xuat hien o S2
    cout<<"Chi xuat hien o xau s1 ma khong xuat hien o xau s2"<<endl;
    for(int i=0;i<256;i++){
        if((cnt1[i])&&!cnt2[i])
        {
            cout<<(char)i<<" ";
        }
    }
    return 0;
}
