#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string masv,ten,lop;
	float d1,d2,d3;
};
bool cmp(SinhVien a,SinhVien b){
	return a.masv<b.masv;
}
void nhap(SinhVien &a){
	cin.ignore();
	getline(cin,a.masv);
	getline(cin,a.ten);
	getline(cin,a.lop);
	cin>>a.d1>>a.d2>>a.d3;
}
void sap_xep(SinhVien A[],int n){
	sort(A,A + n,cmp);
}
void in_ds(SinhVien a[],int n){
	for(int i=0;i<n;i++){
		cout<<i+1<<" "<<a[i].masv<<" "<<a[i].ten<<" "<<a[i].lop;
		printf(" %.1f %.1f %.1f\n",a[i].d1,a[i].d2,a[i].d3);
	}
}
int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}