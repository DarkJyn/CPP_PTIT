#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 998244353
#define endl "\n"

signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	// #ifndef ONLINE_JUDGE
	// freopen("TASK.inp","r",stdin);
	// freopen("TASK.out","w",stdout);
	// #endif
	int m,s;
	cin >> m >> s;
	if(m == 1 && s == 0) cout <<"0 0";
	else if(9*m < s || s  == 0) cout <<"-1 -1";
	else{
		string a = "";
		string b = "";
		a.insert(0,s/9,'9');
		b.insert(0,s/9,'9');
		s%=9;
		if(s>0){
			a.insert(0,1,(char)(s+'0'));
			b.push_back((char)(s+'0'));
		}
		a.insert(0,m-a.size(),'0');
		b.insert(b.size(),m-b.size(),'0');
		if(a[0] == '0'){
			a[0] = '1';
			int check = 1;
			while(a[check] == '0'){
				check++;
				if(check == a.size()) break;
			}
			a[check]--;
		}
		cout << a <<" " << b;
	} 
}