#include<bits/stdc++.h>
#define endl    '\n'
using namespace std;

using ll=long long;

int main()
{
    cout<<"TACH CAC TU CHIA BANG DAU CACH"<<endl;
    //Tach cac tu trong xau bang dau cach
    //ngon     ngu     lap   trinh   C++
    //su dung stringstream
    string s = "ngon     ngu     lap   trinh   C++ JAVA        PHP";
    stringstream ss(s);
    string word;
    while(ss>>word){
        cout<<word<<endl;
    }
    cout<<"TACH CAC TU CHIA BANG DAU -"<<endl;
    //Tach cac tu trong xau bang dau "-"
    //ngon-ngu-lap-trinh- C++
    //su dung stringstream
    string s1 = "ngon-ngu-lap-trinh-C++";
    stringstream ss1(s1);
    while(getline(ss1, word,'-'))
    {
        cout<<word<<endl;
    }

    //Tach cac tu trong xau co cac dau bat ky: ngon.ngu,lap?trinh!C++ -> ngon   ngu lap trinh C++
    //Phuong phap: thay cac ky tu dac biet bang dau ' ' va sau do dung stringstream
    cout<<"TACH CAC TU CHIA BANG DAU BAT KY"<<endl;
    string s2 = "ngon.ngu,lap?trinh!C++&JAVA";
    for(int i = 0; i<s2.size();i++)
    {
        if(s2[i]=='.'||s2[i]==','||s2[i]==','||s2[i]=='?'||s2[i]=='!'||s2[i]=='&'){
            s2[i] = ' ';
        }
    }
    stringstream ss3(s2);
    while(ss3>>word){
        cout<<word<<endl;
    }
}
