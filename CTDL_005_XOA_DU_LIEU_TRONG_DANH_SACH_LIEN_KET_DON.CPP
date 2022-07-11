#include<bits/stdc++.h>
using namespace std;

int n, x;
list<int> a;

void solve(){
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> x;
    a.push_back(x);
  }
  cin >> x;
  a.remove(x);
  for (auto i : a) cout << i << " ";
  cout << endl;
}

int main(){
  solve();
  return 0;
}