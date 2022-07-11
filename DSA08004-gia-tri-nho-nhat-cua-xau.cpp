#include<bits/stdc++.h>
using namespace std;

void solve(){
	int k;
	string s;
	cin >> k >> s;
	long long n = s.length(), res = 0;
	vector<int> v(26, 0);
	for(int i = 0; i < n; i++){
		v[s[i] - 'A']++;
	}
	priority_queue<int> pq;
	for(int i = 0; i < 26; i++){
		pq.push(v[i]);
	}
	while(k--){
		long long c = pq.top();
		pq.pop();
		c--;
		pq.push(c);
	}
	while(!pq.empty()){
		long long cnt = pq.top();
		pq.pop();
		res += cnt * cnt;
	}
	cout << res << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}