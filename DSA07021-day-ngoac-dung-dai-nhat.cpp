#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin >> s;
	int n = s.length(), dis, ans = 0;
	stack<int> st;
	for(int i = 0; i < n; i++){
		if(s[i] == '(') st.push(i);
		else{
			if(!st.empty()){
				if(s[st.top()] == '('){
					st.pop();
					if(st.empty()) dis = i + 1;
					else dis = i - st.top();
					ans = max(ans, dis);
				}
				else st.push(i);
			}
			else st.push(i);
		}
	}
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}