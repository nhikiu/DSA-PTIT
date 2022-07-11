#include<bits/stdc++.h>
using namespace std;

int k, n;
string s, a, b;
char tmp;

void nhap(){
	cin >> k >> s;
	n = s.length();
}

void solve(int i){
	tmp = s[i];
	a = s;
	for(int j = i + 1; j < n; j++){
		b = s;
		if(tmp <= s[i]){
			tmp = s[i];
			swap(b[i], b[j]);
			if(stoll(a) < stoll(b)) a = b;
		}
	}
	if(stoll(a) > stoll(s)){
		s = a;
		k--;
	}
}

void backtrack(int i){
	if(k == 0 || i == n){
		cout << s << endl;
		return;
	}
	if(i < n){
		solve(i);
		backtrack(i + 1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
		backtrack(0);
	}
	return 0;
}