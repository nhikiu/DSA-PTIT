#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n, k;

void solve(){
	map<ll, ll> m;
	cin >> n >> k;
	ll x;
	for(int i = 0; i < n; i++){
		cin >> x;
		m[x]++;
	}
	ll count = 0;
	for(auto i : m){
		if(i.first * 2 == k){
			count += i.second * (i.second - 1);
		}
		else{
			count += i.second * m[k - i.first];
		}
	}
	cout << count / 2 << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}