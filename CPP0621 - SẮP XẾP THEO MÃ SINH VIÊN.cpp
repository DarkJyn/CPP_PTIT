#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

class SinhVien{
	public:
	string masv,ten,lop,mail;
	friend istream &operator >> (istream &input,SinhVien &a){ 
		cin >> a.masv;
		cin.ignore();
		getline(cin,a.ten);
		cin >> a.lop >> a.mail;
		return input;            
	}
	friend ostream &operator<<(ostream &output,SinhVien &a){ 
        cout<<a.masv<<" "<<a.ten<<" "<<a.lop<<" "<<a.mail;
        return output;            
	}
};
bool cmp(SinhVien a,SinhVien b){
	return a.masv < b.masv;
}

signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n = 0;
	SinhVien a[10000];
	while(cin >> a[n]) n++;
	sort(a,a+n,cmp);
	for(int i = 0;i < n;i++) cout<<a[i]<<endl;	
}