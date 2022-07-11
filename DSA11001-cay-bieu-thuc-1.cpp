#include<bits/stdc++.h>
using namespace std;

bool check(char c){
	if(c == '+' || c == '-' || c == '*' || c == '/' || c == '%' || c == '^') return true;
	return false;
}

void solve(){
	string s;
	cin >> s;
	stack<string> st;
	int n = s.length();
	for(int i = 0; i < n; i++){
		if(!check(s[i])){
			st.push(string(1, s[i]));
		}
		else{
			string a = st.top(); st.pop();
			string b = st.top(); st.pop();
			string tmp = b + s[i] + a;
			st.push(tmp);
		}
	}
	cout << st.top() << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}