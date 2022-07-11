#include<bits/stdc++.h>
using namespace std;

int n, a[100000];

void check(){
	vector<int> check_tang(n, 0), check_giam(n, 0);
	check_tang[0] = check_giam[n - 1] = 1;
	for(int i = 1; i < n; i++){
		if(a[i - 1] < a[i]){
			check_tang[i] = check_tang[i - 1] + 1;
		}
		else check_tang[i] = 1;
	}
	for(int i = n - 2; i >= 0; i--){
		if(a[i] > a[i + 1]) check_giam[i] = check_giam[i + 1] + 1;
		else check_giam[i] = 1;
	}
	int ans = 0;
	for(int i = 0; i < n; i++){
		ans = max(ans, check_giam[i] + check_tang[i] - 1);
	}
	check_giam.clear();
	check_tang.clear();
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++) cin >> a[i];
		check();
	}
	return 0;
}