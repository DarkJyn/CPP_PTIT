#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"
struct SoPhuc{
	ll thuc;
	ll ao;
};
SoPhuc binh_phuong_tong(SoPhuc A,SoPhuc B){
	return {(A.thuc + B.thuc) * (A.thuc + B.thuc) - (A.ao + B.ao)*(A.ao + B.ao),2*(A.thuc + B.thuc)*(A.ao + B.ao)};
}
void hien_thi(SoPhuc C){
	cout << C.thuc <<" + "<<C.ao <<"i\n";
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		SoPhuc A;
		SoPhuc B;
		cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
		SoPhuc C = binh_phuong_tong(A, B);
		hien_thi(C);
		cout << endl;
	}
}