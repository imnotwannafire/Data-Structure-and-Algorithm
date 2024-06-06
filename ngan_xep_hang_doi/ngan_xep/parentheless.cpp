// Duyet tu dau den cuoi day, gap mo ngoac thi cho vao stack, gap dong ngoac thi check xem trong ngan xep co mo ngoac tuong ung hay khong
// Co thi xoa khoi ngan xep
// Khong co thi ket luan k hop le

#include<bits/stdc++.h>
using namespace std;
bool checkParentheless(string s)
{
    stack<char> st;
    for(int i=0; i<s.size();i++)
    {
        if(s[i]=='(') st.push(s[i]);
        else{
            if(st.empty()) return false; // Neu khong co dong ngoac tuong ung thi return false
            st.pop(); // neu co thi xoa khoi ngan xep
        }
    }
    return st.empty(); // neu so ngoac '(' bang so ngoac ')' thi ket luan la true, nguoc lai la false
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s="";
    getline(cin, s);
    if(checkParentheless(s)) cout<< "TRUE";
    else cout<<"FALSE";
    return 0;



}
