#include<bits/stdc++.h>
using namespace std;

bool check(string s){
	if(s == "+" || s == "-" || s == "*" || s == "/" || s == "%" || s == "^") return true;
	return false;
}

void solve(){
	int n;
	cin >> n;
	string s[n + 1];
	for(int i = 0; i < n; i++){
		cin >> s[i];
	}
	queue<int> q;
	for(int i = n - 1; i >= 0; i--){
		if(!check(s[i])){
			q.push(stoll(s[i]));
		}
		else{
			int op1 = q.front();
			q.pop();
			int op2 = q.front();
			q.pop();
			int ans;
			if(s[i] == "+") ans = op2 + op1;
			else if(s[i] == "-") ans = op2 - op1;
			else if(s[i] == "*") ans = op2 * op1;
			else if(s[i] == "/") ans = op2 / op1;
			else if(s[i] == "^") ans = pow(op2, op1);
			else if(s[i] == "%") ans = op2 % op1;
			q.push(ans);
		}
	}
	cout << q.front() << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}