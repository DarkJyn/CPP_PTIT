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
        string s;
        cin >> s;
        if(s[s.size()-2]=='8' && s[s.size()-1]=='6'){
            cout << "1\n";
        }
        else cout <<"0\n";
    }
}