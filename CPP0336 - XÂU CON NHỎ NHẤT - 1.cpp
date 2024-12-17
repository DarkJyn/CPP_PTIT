#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--){
		string a,b;
		cin >> a >> b;
		map<char,int> mp;
		for(int i = 0;i < b.size();++i){
			mp[b[i]]++;
		}
		int l,r;
		int s = 1e6;
		for(int i = 0;i < a.size();++i){
			map<char,int> check;
			for(int j = i;j < a.size();++j){
				check[a[j]]++;
				int ok = 0;
				for(int k = 0;k < 26;k++){
					if(check[(char)(k + 'a')] < mp[(char)(k + 'a')]){
						ok = 1;
						break;
					}
				}
				if(ok == 0 && s > j-i+1){
					s = j - i + 1;
					l = i;
					r = j;
				}
			}
		}
		if(s == 1e6) cout <<"-1\n";
		else{
			for(int i = l;i <= r;++i){
				cout << a[i];
			}
			cout <<"\n";
		}
	}	
}