#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

struct SinhVien{
	string masv,ten,lop,mail;
};

signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n;
    cin >> n;
    struct SinhVien a[n];
    for(int i=0;i<n;i++){
    	cin >> a[i].masv;
    	cin.ignore();
    	getline(cin,a[i].ten);
    	cin >> a[i].lop >> a[i].mail;
	}
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string x;
		getline(cin,x);
		for(int i=0;i<x.size();i++){
			if(x[i]>='a'&&x[i]<='z') x[i]-=32;
		}
		cout << "DANH SACH SINH VIEN NGANH " << x << ":" << endl;
		for(int i=0;i<n;i++){
			if(a[i].lop[0]=='E'&&(a[i].masv[5]=='C'||a[i].masv[5]=='A')) continue;
			if(x[0]==a[i].masv[5]) cout << a[i].masv << " " << a[i].ten << " " << a[i].lop << " " << a[i].mail << endl;
		}
	}
}