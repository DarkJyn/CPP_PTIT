#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

class SinhVien{
    public:
	string masv,ten,lop,mail;
    friend istream &operator >> (istream &scanner,SinhVien &a){
		cin >> a.masv;
        cin.ignore();
        getline(cin, a.ten);
        cin >> a.lop;
        cin >> a.mail;
		return scanner;
	}
	friend ostream &operator<<(ostream &systemOut,SinhVien a){
		cout << a.masv <<" "<< a.ten<<" "<< a.lop <<" "<<a.mail;
		return systemOut ;
	}
};

bool cmp(SinhVien a,SinhVien b){
	if(a.lop == b.lop) return a.masv < b.masv;
	return a.lop < b.lop;
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    vector<SinhVien> v;
    for(int i=0;i<n;i++){
    	SinhVien a;
        cin >> a;
        v.push_back(a);
	}
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<n;i++) cout << v[i] << endl;
}