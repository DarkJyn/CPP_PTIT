#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

struct SinhVien{
	string ma,ten;
	int s;
};
bool cmp(SinhVien a,SinhVien b){
	if(a.s == b.s) return a.ma < b.ma;
	return a.s > b.s;
}

signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n;
    cin >> n;
    SinhVien a[n];
    for(int i = 0;i < n;i++){
    	cin.ignore();
    	cin >> a[i].ma;
    	cin.ignore();
    	getline(cin,a[i].ten);
    	cin >> a[i].s;
	}
	sort(a,a + n,cmp);
	int t;
	cin >> t;
	while(t--){
		int l,r;
		cin >> l >> r;
		cout  <<  "DANH SACH DOANH NGHIEP NHAN TU "  <<  l  <<  " DEN "  <<  r  <<  " SINH VIEN:"  <<  endl;
		for(int i = 0;i < n;i++){
			if(a[i].s >= l && a[i].s <= r){
				cout << a[i].ma << " " << a[i].ten << " " << a[i].s << endl;
			}
		}
	}	
}