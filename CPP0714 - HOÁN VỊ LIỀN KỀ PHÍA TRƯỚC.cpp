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
        int n;
        cin >> n;
        int a[n];
        for(int i = 0;i < n;++i){
            cin >> a[i];
        }
        if(prev_permutation(a,a + n)){

            for(int i = 0;i < n;++i){
                cout << a[i] <<" ";
            }
        }
        // do{
        // }while(prev_permutation(a,a + n));
        cout <<"\n";
    }
}