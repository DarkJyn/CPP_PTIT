#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    long long n;
    int k;
    cin >> n >> k;

    unordered_set<int> remainders; // Tập hợp lưu các phần dư
    int limit = min((long long)k, n); // Xét tối đa từ 1 đến min(k, n)

    for (int i = 1; i <= limit; i++) {
        int mod = n % i; // Tính phần dư của n chia i
        if (remainders.find(mod) != remainders.end()) {
            // Nếu phần dư đã tồn tại, in "No" và thoát
            cout << "No" << endl;
            return 0;
        }
        remainders.insert(mod); // Lưu phần dư vào tập hợp
    }

    // Nếu tất cả phần dư đều khác nhau
    cout << "Yes" << endl;
    return 0;
}