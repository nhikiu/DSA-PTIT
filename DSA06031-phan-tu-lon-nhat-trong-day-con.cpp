#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n, k;
  cin >> n >> k;
  int a[n];
  for(auto &x : a){
    cin >> x;
  }
  multiset<int> ms;
  for(int i = 0; i < k; i++){
    ms.insert(a[i]);
  }
  for(int i = k; i < n; i++){
    cout << *ms.rbegin() << " ";
    ms.erase(ms.find(a[i - k]));
    ms.insert(a[i]);
  }
  cout <<*ms.rbegin() << endl;
}

int main(){
  int t;
  cin >> t;
  while(t--)
    solve();
  return 0;
}