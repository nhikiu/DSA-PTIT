#include<bits/stdc++.h>
using namespace std;

bool solve(){
  string s;
  getline(cin, s);
  int n = s.length(), d = 25, tmp;
  stack<int> st;
  for(int i = 0; i < n; i++){
    if(s[i] == '('){
      st.push(i);
    }
    else if(!st.empty() && s[i] == ')'){
      tmp = i - st.top();
      if(tmp <= 2 || tmp == d + 2) return true;
      d = tmp;
      st.pop();
    }
  }
  return false;
}

int main(){
  int t;
  cin >> t;
  cin.ignore();
  while(t--){
    if(solve()) cout << "Yes\n";
    else cout << "No\n";
  }
  return 0;
}
/* CACH 2
#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin >> s;
	int n = s.length(), ans = 0;
	stack<int> st;
	for(int i = 0; i < n; i++){
		if(s[i] == '(') st.push(i);
		else if(s[i] == ')'){
			if(st.empty()) ans = 1;
			else{
				int dis = i - st.top();
				st.pop();
				if(dis <= 2) ans = 1;
			}
		}
	}
	if(!st.empty()) ans = 1;
	cout << (ans ? "Yes\n" : "No\n");
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
*/
