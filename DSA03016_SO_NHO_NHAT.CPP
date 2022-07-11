#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;

int s, d;

void solve(){
  cin >> s >> d;
  string ans = "";
  if (s > d*9) {
    cout << "-1\n";
  }
  else {
    s -= 1;
    while (s >= 9) {
      ans = "9" + ans;
      s -= 9;
    }
    if (ans.size() == d-1) ans = (char)(s + 1 + '0') + ans;
    else {
      ans = (char) (s + '0') + ans;
      int zeroes = d - 1 - ans.size();
      for(int i = 1; i <= zeroes; i++) ans = "0" + ans;
      ans = "1" + ans;
    }
    cout << ans << endl;
  }
}

int main(){
  int t; cin >> t;
  while(t--){
    solve();
  }
  return 0;
}