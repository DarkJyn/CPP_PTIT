#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

void dev(string a,vector <string> &b){
	string x="";
	for(int i=0;i<a.size();i++){
		if(a[i]>='A'&&a[i]<='Z') a[i]+=32;
		if(a[i]==' '){
			b.push_back(x);
			x="";
		}
		else x=x+a[i];
	}
	b.push_back(x);
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
    int t;
	cin >> t;
	cin.ignore();
	map <string,int> c;
	while(t--){
		string a,x;
		getline(cin,a);
		vector <string> b;
		dev(a,b);
		int ii = b.size()-1;
		while(b[ii] == "") ii--;
		x = b[ii];
		for(int i = 0;i < ii;i++){
			if(b[i] == "") continue;
			x = x + b[i][0];
		}
		c[x]++;
		if(c[x] > 1) x = x + (char)(c[x]+'0');
		cout << x <<"@ptit.edu.vn" << endl;
	}
}