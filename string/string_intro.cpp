#include<bits/stdc++.h>

using ll = long long;
using namespace std;
// Chu so dung giua
int main(){
    string s;
    cout<< "Nhap string: ";
    cin>> s;
    if(s.size()%2 == 0)
    {
        cout<< "NOT FOUND\n";
    }
    else{
        cout<< s[s.size()/2]<<endl;
    }

    //Chuyen in hoa in thuong
    s ="NGON NGU LAP TRINH C++ DANG DUOC HOC";

    transform(s.begin(), s.end(), s.begin(),::tolower);
    cout<<s<<endl;
    transform(s.begin(), s.end(), s.begin(),::toupper);
    cout<<s<<endl;
    for(char &x:s){
        x = tolower(x);
    }
    cout<<s<<endl;

    //chuyen string sang int stoi(s)
    //chu y: so phai nam trong khoang cho phep cua integer
    s = "123231423";
    int n = stoi(s);
    cout<<n<<endl;

    // Doi voi so long long
    string s1 = "124272394316534";
    ll n1 = stoll(s1);
    cout<<n1<<endl;

    //Chuyen so thanh xau

    string a = to_string(n1);
    cout<< a<<endl;

    //lat nguoc xau
    reverse(s1.begin(), s1.end());
    cout<<s1<<endl;
    return 0;
}
