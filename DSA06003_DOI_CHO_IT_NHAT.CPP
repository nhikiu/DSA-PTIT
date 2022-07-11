#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> a;

void solve(){
	int count = 0, index;
	for(int i = 0; i < n - 1; i++){
		index = i;
		for (int j = i + 1; j < n; j++){
			if(a[index] > a[j]) index = j;
		}
		if(index != i){
			count++;
			swap(a[i], a[index]);
		}
	}
	cout << count << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
        a.resize(n);
		for(auto &i:a) cin >> i;
		solve();
	}
	return 0;
}