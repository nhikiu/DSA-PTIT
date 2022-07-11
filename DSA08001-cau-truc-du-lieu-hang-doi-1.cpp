#include<bits/stdc++.h>
using namespace std;

void solve(){
  queue<int> q;
  int T, n, m;
  cin >> T;
  while(T--){
    cin >> n;
    if(n == 1) cout << q.size() << endl;
    else if(n == 2){
      (q.empty()) ? cout << "YES\n" : cout << "NO\n";
    }
    else if(n == 3){
      cin >> m;
      q.push(m);
    }
    else if(n == 4){
      if(!q.empty()) q.pop();
    }
    else if(n == 5){
      if(q.empty()) cout << -1 << endl;
      else cout << q.front() << endl;
    }
    else if(n == 6){
      if(q.empty()) cout << -1 << endl;
      else cout << m << endl;
    }
  }
}

int main(){
  int t, n, a;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}