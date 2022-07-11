#include<bits/stdc++.h>
using namespace std;

int n, x;
void solve(){
  cin >> n;
  int s = 0;
  for(int i = 1; i <= n; i++){
    cin >> x;
    s += x;
  }
  cout << n-s << endl;
}

int main () {
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}