#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n, u, v;
  string s;
  cin >> n;
  int a[n + 1][n + 1];
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
      a[i][j] = 0;
    }
  }
  cin.ignore();
  for(int i = 1; i <= n; i++){
    getline(cin, s);
    string tmp;
    stringstream ss(s);
    while(ss >> tmp){
      int res = stoi(tmp);
      a[res][i] = 1;
      a[i][res] = 1;
    }
  }
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}

int main () {
  solve();
  return 0;
}