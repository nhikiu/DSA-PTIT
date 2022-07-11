#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;

int n;

void solve(){
  cin >> n;
  string s1, s2;
  int seven = n / 7 + 1;
  int four = 0;
  bool stop = false;
  while (seven--) {
    n -= seven * 7;
    if (n%4 == 0) {
      four = n / 4;
      stop = true;
      break;
    }
    n += seven * 7;
  }
  if (!stop) cout << "-1\n";
  else{
    s1.assign(four, '4');
    s2.resize(seven, '7');
    cout << s1 + s2 << endl;
  }
}

int main(){
  int t; cin >> t;
  while(t--){
    solve();
  }
  return 0;
}