#include<bits/stdc++.h>
using namespace std;

string a, b;

void solve(){
  cin >> a >> b;
  long long x1 = stoll(a, 0, 2);
  long long x2 = stoll(b, 0, 2);
  cout << x1 * x2 << endl;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}