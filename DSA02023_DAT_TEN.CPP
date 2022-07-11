#include<bits/stdc++.h>
using namespace std;

int n, k;
vector<string> name;
vector<int> a;

void nhap(){
	cin >> n >> k;
	string s;
	set<string> ss;
	for(int i = 0; i < n; i++){
		cin >> s;
		ss.insert(s);
	}
	for(auto i : ss){
		name.push_back(i);
	}
	n = name.size();
	a.resize(k + 1);
	for(int i = 1; i <= k; i++){
		a[i] = i;
	}
}

void inkq(){
	for(int i = 1; i <= k; i++){
		cout << name[a[i] - 1] << " ";
	}
	cout << endl;
}

void back_tracking(int i){
	for(int j = a[i - 1] + 1; j <= n - k + i; j++){
		a[i] = j;
		if(i == k) inkq();
		else back_tracking(i + 1);
	}
}

int main(){
	nhap();
	back_tracking(1);
	a.clear();
	name.clear();
	return 0;
}