// Cho 200.000.000 co tra sua, ban dau moi coc co do ngot = 0
// Tien hanh N thao tac lien tiep, moi thao tac se them 1 thia duong vao coc co vi tri tu L den R
// Nhung coc co luong duong >= K thi duoc chuyen den phu vu khac hang
// co nhieu cau hoi, moi cau hoi yeu cau tra loi trong coc tra sua tu L den R co bao nhieu coc dat chuan
#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, k, q;
    int cups = 200000;
    cin>>n>>k>>q;
    // Tao mang hieu cua cac coc tra sua de the hien qua trinh them thia duong vao cac coc
    // Mang hieu ban dau bang = 0 do cac coc tra sua co do ngot = 0
    vector<int> D(cups+1,0);
    vector<int> A(cups+1,0); // mang chua do ngot cua cac coc tra sua
    vector<int> F(cups+1,0); // mang chua so coc dat tieu chuan tai tung vi tri cua coc tra sua
    // Thuc chat F la 1 mang cong don cua cac phan tu co gia tri la 1 (danh dau dat hay khong dat tieu chuan)
    // tien hanh thuc hien n thao tac
    for(int i=0; i<n; i++)
    {
        int l, r;
        cin>>l>>r;
        D[l] ++;
        D[r+1]--;
    }
    // Tai tao do ngot cua cac coc
    for(int i=0; i<cups;i++)
    {
        if(i==0)A[i] = D[i];
        else{
            A[i] = A[i-1]+D[i];
        }
    }
    //Dem so coc co do ngot dat tieu chuan tai vi tri i
    int dem=0;
    for(int i=0; i<cups; i++)
    {
        if(A[i]>=k) dem++;
        F[i] = dem;
    }
    while(q--)
    {
        int left, right;
        cin>>left>>right;
        cout<<F[right]-F[left-1]<<endl;
    }
    return 0;

}
