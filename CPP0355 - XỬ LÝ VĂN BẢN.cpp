#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
    freopen("TASK.inp","r",stdin);
    freopen("TASK.out","w",stdout);
    #endif
    string a;
    int ok = 1;
    while(cin >> a){
        int n = a.size();
        for(int i = 0;i < n;i++){
            if(a[i] >= 'A' && a[i] <= 'Z') a[i] += 32;
        }
        if(ok == 1){
            a[0] -= 32;
            ok = 0;
        }
        if(a[n-1] == '.' || a[n-1] == '!' || a[n-1] == '?'){
            a.erase(a.end()-1);
            cout << a << endl;
            ok = 1;
        }
        else cout << a << " ";
    }
    
}