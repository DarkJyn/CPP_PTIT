#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 998244353
#define endl "\n"
struct ThiSinh{
    string name;
    string birthdate;
    float mark1;
    float mark2;
    float mark3;
    float sumofmark;
};
void nhap(ThiSinh &A){
    getline(cin,A.name);
    cin >> A.birthdate;
    cin >> A.mark1;
    cin >> A.mark2;
    cin >> A.mark3;
}
void in(ThiSinh A){
    A.sumofmark = A.mark1 + A.mark2 + A.mark3;
    cout << A.name <<" " << A.birthdate <<" " <<fixed << setprecision(1) << A.sumofmark;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}