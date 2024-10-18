#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 998244353
#define endl "\n"

struct SinhVien{
    string name;
    string classcode;
    string birthdate;
    float gpa;
};
void nhap(SinhVien &A){
    getline(cin,A.name);
    cin >> A.classcode;
    cin >> A.birthdate;
    cin >> A.gpa;
}
void in(SinhVien A){
    if(A.birthdate[1]=='/') A.birthdate.insert(0,1,'0');
	if(A.birthdate[4]=='/') A.birthdate.insert(3,1,'0');
    cout << "B20DCCN001 " << A.name <<" " <<A.classcode <<" " <<A.birthdate <<" " <<fixed <<setprecision(2) << A.gpa;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}