//Xac dinh bieu thuc hop le bang ngan xep
// khi xet tung ky tu ma la dau donng ngoac thì tim xem trong ngan xep co dau mo ngoac khong
// Net co thi rut dau mo ngoac ra khoi ngan xep
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
string s="";// luu ket qua 1 xau do dai n
string tmp = "[](){}";//tap hop cac loai dau
int n; // do dai xau
vector<string> res;
bool check(string s)
{
    stack<char> st;
    for(char x:s)
    {
        if(x=='[' || x  == '{' || x== '(')
        {
            st.push(x);
        }
        else
        {
            if(st.empty()) return false;
            char y = st.top();
            st.pop();
            if((x==')'&& y!='(')||(x== '['&& y!=']')||(x=='}'&&y!='{'))
            {
                return false;
            }
        }
    }
    if(st.empty()) return true;
    return false;
}
void Try(int i)
{

    for(int j=0; j<tmp.size(); j++)
    {
        s+=tmp[j];
        if(s.size()==n)
        {
            if(check(s)) res.push_back(s);
        }else
        {
            Try(i+1);
        }
        s.pop_back();
    }

}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n;
    if(n%2==1)
    {
        cout<< "NOT FOUND"<<endl;
    }
    else
    {
        Try(1);
        sort(s.begin(), s.end());
        for(string x: res) cout<<x<<" ";
    }


}
