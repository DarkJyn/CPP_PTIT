#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define vi vector;

int main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	// #ifndef ONLINE_JUDGE
	// freopen("TASK.inp","r",stdin);
	// freopen("TASK.out","w",stdout);
	// #endif
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		int n = s.size();
		int cnt = 1;
		for(int i=0;i<n;i++){
			if((s[i-1]==' '||s[i-1]=='\t') && s[i]>='a' && s[i]<='z') cnt++;
		}
		cout << cnt <<"\n";
	}
}