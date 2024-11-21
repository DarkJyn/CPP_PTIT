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
    SinhVien a[n];
    for(int i = 0;i < n;i++){
    	cin >> a[i].masv;
    	cin.ignore();
    	getline(cin,a[i].ten);
    	cin >> a[i].lop >> a[i].mail;
	}
	int t;
	cin >> t;
	while(t--){
		string x;
		cin >> x;
		cout<<"DANH SACH SINH VIEN LOP " << x << ":"<<endl;
		for(int i = 0;i < n;i++){
			if(x == a[i].lop) cout << a[i].masv << " " << a[i].ten << " " << a[i].lop << " " << a[i].mail<< endl;
		}
	}	
}