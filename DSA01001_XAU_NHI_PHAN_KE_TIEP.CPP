#include<bits/stdc++.h>
using namespace std;

int check;
string s;
void sinh_nhi_phan_ke_tiep(){
	int i = s.length() - 1;
	while(i >= 0 && s[i] == '1'){
		s[i] = '0';
		i--;
	}
	if(i == -1){
		check = 0;
	}
	else{
		s[i] = '1';
	}
}

void display(){
	for (int i = 0; i < s.length(); i++){
		cout << s[i];
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> s;
		check = 1;
		sinh_nhi_phan_ke_tiep();
		display();
	}
	return 0;
}

