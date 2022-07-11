#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		set <int> s;
		int a[n];
		for (int i = 0; i < n; i++){
			cin >> a[i];
			s.insert(a[i]);
		}
		if(s.size() < 2) cout << -1;
		else{
			int count = 0;
			for (set<int>:: iterator it = s.begin(); it != s.end(); it++){
				count++;
				cout<< *it << " ";
				if(count == 2) break;
			}
		}
		cout << endl;
	}
	return 0;
}