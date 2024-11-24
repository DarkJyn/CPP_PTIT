#include <bits/stdc++.h>

using namespace std;

long long solve(long long N, long long K) {
    if (K == 0) {
        return 0;
    }
    
    long long full_cycles = N / K;
    long long remainder = N % K;
    
    long long cycle_sum = (K * (K - 1)) / 2;
    
    long long total_sum = full_cycles * cycle_sum;
    
    total_sum += (remainder * (remainder + 1)) / 2;
    
    return total_sum;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        long long N, K;
        cin >> N >> K;
        cout << solve(N, K) << endl;
    }
    
    return 0;
}