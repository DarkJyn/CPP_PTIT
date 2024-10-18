#include <bits/stdc++.h>

using namespace std;

using ll = unsigned long long;

#define MOD 1000000007
#define vi vector;

char resA[] = {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
char resB[] = {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};

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
        char a[17];
        for(int i = 0;i < 15;++i){
            cin >> a[i];
        }
        if(n == 101){
            int cnt = 0;
            for(int i = 0;i < 15;++i){
                if(a[i] == resA[i]){
                    cnt++;
                }
            }
            cout <<fixed <<setprecision(2) << 2.0*cnt/3;
        }
        else{
            int cnt = 0;
            for(int i = 0;i < 15;++i){
                if(a[i]==resB[i]){
                    cnt++;
                }
            }
            cout <<fixed <<setprecision(2) << 2.0*cnt/3;
        }
        cout << "\n";
    }

}