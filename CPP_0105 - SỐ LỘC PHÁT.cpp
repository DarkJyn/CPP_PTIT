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
        int n;
        cin >> n;
        int check = 1;
        while(n > 0){
            if(n % 10 != 8 && n % 10 != 6 && n % 10 != 0){
                cout << "NO";
                check = 0;
                break;               
            }
            n /= 10;
        }
        if(check) cout << "YES";
        cout <<"\n";
    }

}