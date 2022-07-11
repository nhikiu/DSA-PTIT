#include<bits/stdc++.h>
using namespace std;

void solve(){
  string s;
  getline(cin, s);
  int n = s.length(), dem_ngoac_mo = 0, dem_ngoac_dong = 0;
  stack<char> st;
  for(int i = 0; i < n; i++){
    if(!st.empty() && st.top() == '(' && s[i] == ')'){
      st.pop();
    }
    else st.push(s[i]);
  }
  while(!st.empty()){
    if(st.top() == '(') dem_ngoac_mo++;
    else dem_ngoac_dong++;
    st.pop();
  }
  cout << (dem_ngoac_mo + 1) / 2 + (dem_ngoac_dong + 1) / 2 << endl;
}

int main(){
  int t;
  cin >> t;
  cin.ignore();
  while(t--){
    solve();
  }
  return 0;
}
/* cach 2
#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin >> s;
	int n = s.length();
	stack<char> st;
	for(int i = 0; i < n; i++){
		if(s[i] == '(') st.push(s[i]);
		else{
			if(st.empty()) st.push(s[i]);
			else if(st.top() == '(') st.pop();
			else st.push(s[i]);
		}
	}
	int ans = st.size() / 2, dem = 0;
	while(!st.empty()){
		if(st.top() == ')') dem++;
		st.pop();
	}
	if(dem % 2 == 1) ans++;
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
*/