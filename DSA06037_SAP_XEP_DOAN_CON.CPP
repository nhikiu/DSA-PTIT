#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> a;

void nhap(){
	cin >> n;
	a.resize(n,0);
	for(auto &i : a) cin >> i;
}

void solve(){
	// Y tuong: tim max nua day dau a[0]->a[i] va min nua day sau a[i+1]->a[n-1]
	// neu max nua day dau <= min nua day sau => answer
	vector<int> Max(n), Min(n);
	Max[0] = a[0];
	Min[n - 1] = a[n - 1];
	for(int i = 1; i < n; i++) Max[i] = max(a[i],Max[i - 1]);
	for(int i = n - 2; i >= 0; i--) Min[i] = min(a[i + 1], Min[i + 1]);
	vector<int> ans;
	for(int i = 0; i < n - 1; i++){
		if(Max[i] <= Min[i]){
			ans.push_back(i + 1);
		}
	}
	cout << ans.size() << endl;
	for(auto i : ans) cout << i << " ";
	cout << endl;
	ans.clear();
}

int main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
		solve();
	}
	return 0;
}