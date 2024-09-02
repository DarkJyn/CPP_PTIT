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
	while(t--){
		string s;
        cin >> s;
        map<char,int> mp;
        for(int i = 0;i < s.size();++i){
            mp[s[i]]++;
        }
        for(int i = 0;i < s.size();++i){
            if(mp[s[i]] == 1) cout << s[i];
        }
        cout << "\n";
	}
}