#include <bits/stdc++.h>

using namespace std;
string dchuan(string s){
	for(int i = 0;i < s.size();++i){
		if(s[i] >= 'A' && s[i] <= 'Z')s[i] += 32;
	}
	return s;
}
int main(){
    ifstream input1,input2;
    map<string, int> a,b,c;
	string x;
	input1.open("DATA1.in");
    while(input1 >> x){
		x = dchuan(x);
		a[x]++;
		c[x]++;
	}
	input1.close();
	input2.open("DATA2.in");
	while(input2 >> x){
		x = dchuan(x);
		b[x]++;
		c[x]++;
	}
	input2.close();
	for(auto x : c) cout << x.first <<" ";
	cout << "\n";
	for(auto x : a){
		if(b[x.first] > 0){
			cout << x.first<<" ";
		}
	}
}