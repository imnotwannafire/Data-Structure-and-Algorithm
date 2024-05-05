// Chuan hoa ten nguyen van nam -> Nguyen Van, NAM va NAM, Nguyen Van
#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
using ll = long long;

void chuanHoa(string &s)
{
    s[0] = toupper(s[0]);
    for(int i =1; i<s.size();i++)
    {
        s[i] = tolower(s[i]);
    }
}
int main()
{
    string s;
    getline(cin,s);
    vector<string> v;
    stringstream ss(s);
    string word;
    while(ss>>word)
    {
        v.push_back(word);
    }
    cout<<v.size()<<endl;
    for(char &x:v[v.size()-1])
    {
        x = toupper(x);
    }
    for(int i=0; i< v.size()-1;i++)
    {
        chuanHoa(v[i]);
    }
    for(int i = 0; i<v.size()-1;i++)
    {
        if(i!=v.size()-2)
            cout<<v[i]<<" ";
        else if(i==v.size()-2)
            cout<<v[i]<<", ";
    }
    cout<<v[v.size()-1];
    cout<<endl;
    cout<<v[v.size()-1]<<", ";
    for(int i = 0; i<v.size()-1;i++)
    {
        if(i!=v.size()-2)
            cout<<v[i]<<" ";
        else if(i==v.size()-2)
            cout<<v[i];
    }

}
