#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 998244353
#define endl "\n"

struct NhanVien{
    string name;
    string gender;
    string birthdate;
    string address;
    string faxcode;
    string date;
};
void nhap(NhanVien &A){
    getline(cin,A.name);
    cin >> A.gender;
    cin >> A.birthdate;
    cin.ignore();
    getline(cin,A.address);
    cin >> A.faxcode;
    cin >> A.date;
}
void in(NhanVien A){
    if(A.birthdate[1]=='/') A.birthdate.insert(0,1,'0');
	if(A.birthdate[4]=='/') A.birthdate.insert(3,1,'0');
    if(A.date[1]=='/') A.birthdate.insert(0,1,'0');
	if(A.date[4]=='/') A.birthdate.insert(3,1,'0');
    cout << "00001 " << A.name <<" " << A.gender<<" " <<A.birthdate <<" " <<A.address <<" " <<A.faxcode <<" " <<A.date;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}