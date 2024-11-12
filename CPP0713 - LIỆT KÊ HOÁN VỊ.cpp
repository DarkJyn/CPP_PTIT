#include <bits/stdc++.h>

using namespace std;

using ll = long long;
#define MOD 1000000007
#define vi vector;

vector<vector<int>> solve(int n){
    vector<vector<int>> v;
    vector<int> a(n+2);
    for(int i = 0;i < n;++i){
        a[i] = i+1;
    }
    // 1 2 3 4 5
    while(1){
        v.push_back(a);
        int idx = n-2;
        // 5
        while(idx >= 0 && a[idx] > a[idx+1]){
            idx--;
        }
        if(idx < 0) break;
        else{
            int tmp = n-1;
            while(tmp > idx && a[idx] > a[tmp]){
                tmp--;
            }
            swap(a[tmp],a[idx]);
            int i = idx+ 1;
            int j = n-1;
            while(i<j){
                swap(a[i],a[j]);
                i++;
                j--;
            }
        }
    }
    return v;
}

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
        vector<vector<int>> res = solve(n);
        for(int i = 0;i < res.size();++i){
            for(int j = 0;j < n;++j){
                cout <<res[i][j];
            }
            cout <<" ";
        }
        cout << endl;
    }
}