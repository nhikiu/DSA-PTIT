#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, ans;
	cin >> n;
	queue<pair<int, int>> q;
	set<int> s;
	q.push({n, 0});
	while(!q.empty()){
		auto p = q.front();
		q.pop();
		if(p.first == 1){
			ans = p.second;
			break;
		}
		if(p.first - 1 > 0 && s.find(p.first - 1) == s.end()){
			q.push({p.first - 1, p.second + 1});
			s.insert(p.first - 1);
		}
		for(int i = 2; i <= sqrt(p.first); i++){
			if(p.first % i == 0){
				int k = max(i, p.first / i);
				if(s.find(k) == s.end()){
					q.push({k, p.second + 1});
					s.insert(k);
				}

			}
		}
	}
	cout << ans << endl;
}

int main(){
	// ios_base::sync_with_stdio(false);
	// cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}