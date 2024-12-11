#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"
ll s = 0;
void solve(string a){
	if(a.size() > 10) return;
	int pos = 0;
	if(a[0] == '-') pos = 1;
	for(int i = pos;i < a.size();i++) if(a[i] > '9' || a[i] < '0') return;
	ll ss = 0;
	for(int i = pos;i < a.size();i++){
		ss = ss * 10 + (a[i] - '0');
	}
	if(pos == 1) ss *= 0 - 1;
	if(ss <= INT_MAX && ss >= (0 - 1) * INT_MAX) s += ss;
}
int main(){
    freopen("DATA.in","r",stdin);
	string a;
	while(cin >> a){
    	solve(a);
	}
	cout << s;
}