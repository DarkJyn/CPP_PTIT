#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

void dev(string a,vector <string> &b){
	string x = "";
	for(int i = 0;i < a .size();i++){
		if(a[i] == ' '){
			b.push_back(x);
			x = "";
		}
		else x = x+a[i];
	}
	b.push_back(x);
}
int check(string a,vector <string> b){
	for(int i = 0;i < b.size();i++){
		if(a == b[i]) return 1;
	}
	return 0;
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
	while(t--){
		string a,b;
		getline(cin,a);
		getline(cin,b);
		vector <string> c,d;
		dev(a,c);
		dev(b,d);
		for(int i = 0;i <c .size();i++){
			if(check(c[i],d)){
				c.erase(c.begin()+i,c.begin()+i+1);
				i--;
			}
		}
		sort(c.begin(),c.end());
		cout <<c[0]  << " ";
		for(int i=1;i < c.size();i++){
			if(c[i] == c[i-1]) continue;
			cout << c[i] <<" ";
		}
		cout << "\n";
	}
}
