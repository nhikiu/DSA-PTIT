#include<bits/stdc++.h>
using namespace std;

int n, k, used[100];
char c, a[100];

void inkq(){
	for(int i = 1; i <= n; i++){
		cout << a[i];
	}
	cout << endl;
}

bool check(){
	for(int i = 2; i <= n - 1; i++){
		if(a[i] == 'A' || a[i] == 'E'){
			//2 nguyen am A, E khong bi kep giua 2 phu am
			if(a[i - 1] != 'A' && a[i - 1] != 'E'
			&& a[i + 1] != 'A' && a[i + 1] != 'E') return false;
		}
	}
	return true;
}

void back_track(int i){
	for(char j = 'A'; j <= c; j++){
		if(used[j] == 0){
			used[j] = 1;
			a[i] = j;
			if(i == n && check()) inkq();
			else back_track(i + 1);
			used[j] = 0;
		}
	}
}

int main(){
	cin >> c;
	memset(used, 0, sizeof(used));
	n = (int)c - 'A' + 1;
	back_track(1);
	return 0;
}