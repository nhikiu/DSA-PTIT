#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;


vector<string> cube;
string s;

void CubeVector () {
  for(int i = 0; i <= 1000; i++) cube.push_back(to_string(i*i*i));
}

bool check(string a, string s){
  int i = 0;
  for (char j:s)
    if (j == a[i])
      ++i;
  return i == a.size();
}

void solve(){
  cin >> s;
  for(int i = cube.size()-1; i >= 0; i--)
    if (cube[i].size() <= s.size() && check(cube[i], s)) {
      cout << cube[i] << endl;
      return;
    }
  cout << "-1\n";
}

int main(){
  CubeVector();
  int t; cin >> t;
  while(t--){
    solve();
  }
  return 0;
}