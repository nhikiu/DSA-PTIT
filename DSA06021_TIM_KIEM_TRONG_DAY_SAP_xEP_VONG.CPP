#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n], answer;
		for (int i = 0; i < n; i++){
			cin >> a[i];
			if (a[i] == k) answer = i;
		}
		cout << answer + 1 << endl;
	}
	return 0;
}