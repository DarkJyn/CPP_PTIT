#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 998244353
#define endl "\n"

signed main(){
	// cin.tie(nullptr)->sync_with_stdio(false);
	// #ifndef ONLINE_JUDGE
	// freopen("TASK.inp","r",stdin);
	// freopen("TASK.out","w",stdout);
	// #endif
	int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cin.ignore();
        string a;
        getline(cin,a);
        map<int,int> mp;
        int lens = a.size();
        for(int i = 0;i < lens;++i){
            mp[a[i] - '0']++;
        }
        for(int i = 0;i <= 9;++i){
            if(mp[i] > 0){
                cout << i <<" ";
            }
        }
        cout << endl;
    }
}