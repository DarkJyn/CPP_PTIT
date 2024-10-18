#include <bits/stdc++.h>

using namespace std;

using ll = unsigned long long;

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
        double a,b,c,d;
        double a1,b1,c1,d1;
        cin >> a >> b >> c >> d;
        cout << fixed << setprecision(4)<<sqrt((c-a)*(c-a) + (b - d)*(b-d))<<"\n";
    }
}