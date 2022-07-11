#include<bits/stdc++.h>
using namespace std;

void solve(){
	string u = "", v = "";
	int x, ans;
	for(int i = 0; i < 6; i++){
		cin >> x;
		u += to_string(x);
	}
	for(int i = 0; i < 6; i++){
		cin >> x;
		v += to_string(x);
	}
	set<string> s;
	queue<pair<string, int>> q;
	q.push({u, 0});
	while(!q.empty()){
		pair<string, int> tmp = q.front();
		q.pop();
		string str = tmp.first;
		if(str == v){
			ans = tmp.second;
			break;
		}
		string tmp_left = "", tmp_right = "";
		tmp_left = string(1, str[3]) + string(1, str[0]) + string(1, str[2]) + string(1, str[4]) + string(1, str[1]) + string(1, str[5]);
		tmp_right = string(1, str[0]) + string(1, str[4]) + string(1, str[1]) + string(1, str[3]) + string(1, str[5]) + string(1, str[2]);

		if(s.find(tmp_left) == s.end()){
			s.insert(tmp_left);
			q.push({tmp_left, tmp.second + 1});
		}
		if(s.find(tmp_right) == s.end()){
			s.insert(tmp_right);
			q.push({tmp_right, tmp.second + 1});
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