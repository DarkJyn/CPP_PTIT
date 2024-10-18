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
        string res = "";
        for(int i = 0;i <s.size();++i){
            if(s[i] == '0' &&s[i+1] == '8' &&s[i+2] == '4' && i < s.size() - 2){
                i = i + 2;
                continue;
            }
            res += s[i];
        }
        cout<<res <<"\n";
    }
}