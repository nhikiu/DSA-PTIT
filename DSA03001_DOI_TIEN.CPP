#include<bits/stdc++.h>
using namespace std;

vector<int> value {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
int n = value.size();
int N, cou;

void solve(){
  cin >> N;
  cou = 0;
  for(int i = 0; i < n; i++){
    if (N >= value[i]) {
      cou += N/value[i];
      N %= value[i];
    }
    if (N == 0) break;
  }
  cout << cou << endl;
}
int main () {
  int t; cin >> t;
  while(t--){
    solve();
  }
  return 0;
}