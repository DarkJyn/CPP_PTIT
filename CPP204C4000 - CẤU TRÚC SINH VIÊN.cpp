#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"
struct SinhVien{
    string name;
    string classcode;
    string birthday;
    float grade;
};
void chuanhoaten(string &a){
    for(int i=0;i<a.size();i++){
        if(a[i]>='A'&&a[i]<='Z') a[i]+=32;
    if(i == 0 || a[i-1] == ' '){
      a[i] -= 32;
    }
        if(a[i]==' '){
            continue;
        }
    }
}
void chuanhoangaysinh(string &a){
  if(a[1]=='/') a.insert(0,1,'0');
    if(a[4]=='/') a.insert(3,1,'0');
}
void nhapThongTinSV(SinhVien &a){
    // cin.ignore();
    getline(cin,a.name);
    cin >> a.classcode;
    cin >> a.birthday;
    cin >> a.grade;
    chuanhoangaysinh(a.birthday);
    chuanhoaten(a.name);
}
void inThongTinSV(SinhVien a){
    cout <<"N20DCCN001"<<" "<< a.name <<" " << a.classcode <<" " << a.birthday <<" "<< fixed << setprecision(2) <<a.grade;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}