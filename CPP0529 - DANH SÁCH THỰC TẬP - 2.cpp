#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

struct intern{
	int stt;
	string masv,ten,lop,email,dn;
};
bool cmp(intern a,intern b){
	return a.masv < b.masv;
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
    int n;
	cin >> n;
	struct intern a[n];
	cin.ignore();
	for(int i = 0;i < n;i++){
		a[i].stt = i + 1;
		getline(cin,a[i].masv);
		getline(cin,a[i].ten);
		getline(cin,a[i].lop);
		getline(cin,a[i].email);
		getline(cin,a[i].dn);
	}
	sort(a,a+n,cmp);
    int m;
	cin >> m;
	string x;
	for(int ii = 0;ii < m;ii++){
		cin >> x;
		for(int i = 0;i < n;i++){
			if(a[i].dn == x) cout<<a[i].stt<<" "<<a[i].masv<<" "<<a[i].ten<<" "<<a[i].lop<<" "<<a[i].email<<" "<<a[i].dn<<endl;
		}
	}
}