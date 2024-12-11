#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define MOD 1000000007
#define endl "\n"

string dinhchuan(string s){
	for(int i = 0;i < s.size() ;++i){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			s[i] += 32;
		}
	}
	return s;
}

signed main(){
	cin.tie(nullptr)->sync_with_stdio(false);
	string s;
	map<string,int> mark1, mark2, mark3;
	ifstream input1,input2;
	input1.open("DATA1.in");
	while (input1 >> s){
		s = dinhchuan(s);
		mark1[s]++;
		mark3[s]++;
	}
	input1.close();
	input2.open("DATA2.in");
	while (input2 >> s){
		s = dinhchuan(s);
		mark2[s]++;
		mark3[s]++;
	}
	input2.close();
	for(auto x : mark3){
		cout << x.first <<" ";
	}
	cout <<"\n";
	for(auto x : mark1){
		if(mark2[x.first] > 0){
			cout << x.first <<" ";
		}
	}
}