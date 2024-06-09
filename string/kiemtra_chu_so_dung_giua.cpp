#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int len = s.size();
    if(len%2==1)
    {
        int mid = len/2;
        cout<<s[mid];
    }
    else cout<<"NOT FOUND"<<endl;
}
