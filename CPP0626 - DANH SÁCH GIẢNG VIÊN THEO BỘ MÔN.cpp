#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

struct SinhVien{
	string ten,mon,ma;
};
void chuanhoa(string &a){
	string x = "";
	x += a[0];
	for(int i = 0;i < a.size();i++){
    	if(a[i] == ' ') x += (char)(a[i+1] - 32);
	}
	a = x;
}

signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int n;
    cin >> n;
    SinhVien a[n];
    cin.ignore();
    for(int i = 0;i < n;i++){
    	getline(cin,a[i].ten);
    	getline(cin,a[i].mon);
    	if(i<9) a[i].ma = "GV0";
    	else a[i].ma = "GV";
    	a[i].ma += to_string(i + 1);
    	int m = a[i].ten.size(),k;
    	chuanhoa(a[i].mon);
    }
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
    	string x;
		getline(cin,x);
		chuanhoa(x);
		cout << "DANH SACH GIANG VIEN BO MON "<<x<<":"<<endl;
		for(int i = 0;i < n;i++){
			if(x == a[i].mon) cout << a[i].ma << " " << a[i].ten << " " << a[i].mon << endl;
		}
    }	
}