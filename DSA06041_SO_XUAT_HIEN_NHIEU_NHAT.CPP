#include<bits/stdc++.h>
using namespace std;

int n, x;

void solve(){
    set<int> s;
    map<int, int> m;
    cin >> n;
	for(int i = 0; i < n; i++){
		cin >> x;
		s.insert(x);
		m[x]++;
	}
    int max = 0, ans;
	for(auto i:s){
		if(m[i] > max && m[i] > n/2){
			max = m[i];
			ans = i;
		}
	}
	if(max > 0) cout << ans << endl;
	else cout << "NO\n";
}

int main(){
    int t;
    cin >> t;
    while(t--){
	    solve();
    }
	return 0;
}