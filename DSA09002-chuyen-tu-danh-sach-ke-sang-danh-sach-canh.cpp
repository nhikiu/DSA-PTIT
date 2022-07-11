#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  int n;
  cin >> n;
  cin.ignore();
  vector<int> v[n + 1];
  for(int i = 1; i <= n; i++){
    getline(cin, s);
    istringstream iss(s);
    string tmp;
    while(iss >> tmp) v[i].push_back(stoi(tmp));
  }
  for(int i = 1; i <= n; i++){
    for(auto x : v[i]){
      if(i < x) cout << i << " " << x << endl;
    }
  }
	return 0;
}