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
        char c;
        cin >> c;
        if(c >= 'A' && c <= 'Z'){
            char z =  c + 32;
            cout << z;
        }
        else if(c >= 'a' && c <= 'z'){
            char z = c - 32;
            cout << z;
        }
        cout <<"\n";
    }
    
}