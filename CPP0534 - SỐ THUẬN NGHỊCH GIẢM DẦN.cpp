#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

struct number{
	string x;
	int s;
};
bool check(string a){
	int n = a.size();
	for(int i = 0;i <= (n-1)/2;i++){
		if(a[i] != a[n-i-1]) return 0;
	}
	return 1;
}
bool cmp(struct number a,struct number b){
	if(a.x.size() == b.x.size()) return a.x > b.x;
	return a.x.size() > b.x.size();
}

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
    string a;
	vector <number> b;
	while(cin >> a){
		if(a.size() == 1) continue;
		if(check(a)){
			int k = -1;
			for(int i = 0;i < b.size();i++){
				if(a == b[i].x){
					k = i;
					break;
				}
			}
			if(k == -1){
				struct number c;
				c.x = a;
				c.s = 1;
				b.push_back(c);
			}
			else b[k].s++;
		}
	}
	sort(b.begin(),b.end(),cmp);
	for(int i = 0;i < b.size();i++) cout << b[i].x << " " << b[i].s << "\n";
}