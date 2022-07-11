#include<bits/stdc++.h>
using namespace std;

int n, a[100], used[100];
string s;

void inkq(){
	for(int i = 1; i <= n; i++){
		cout << s[a[i] - 1];
	}
	cout << " ";
}

void back_track(int i){
	for(int j = 1; j <= n; j++){
		if(used[j] == 0){
			a[i] = j;
			used[j] = 1;
			if(i == n) inkq();
			else back_track(i + 1);
			used[j] = 0;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> s;
		n = s.length();
		memset(used, 0, sizeof(used));
		back_track(1);
		cout << endl;
	}
	return 0;
}
