#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    // #ifndef ONLINE_JUDGE
    // freopen("TASK.inp","r",stdin);
    // freopen("TASK.out","w",stdout);
    // #endif
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int a[n];
        int b[m];
        map<int,int> mp;
        map<int,int> mp1;
        int max = -1;
        for(int i = 0;i < n;++i){
            cin >> a[i];
            if(a[i] > max) max = a[i];
            mp[a[i]]++;    
            
        }
        for(int i = 0;i < m;++i){
            cin >> b[i];
            if(b[i] > max) max = b[i];
            mp1[b[i]]++;    
        }
        for(int i = 0;i <= max;++i ){
            if(mp[i] > 0 || mp1[i] > 0){
                cout << i <<" ";
            }
        }
        cout <<"\n";
        for(int i = 0;i <= max ;++i){
            if(mp[i] > 0 && mp1[i] > 0){
                cout << i <<" ";
            }
        }
        cout << endl;
    }
    
}