#include<bits/stdc++.h>
using namespace std;

void solve(){
  queue<int> q;
  string s;
  int T, n;
  cin >> T;
  while(T--){
    cin >> s;
    if(s == "PUSH"){
      cin >> n;
      q.push(n);
    }
    else if(s == "PRINTFRONT"){
      if(!q.empty()) cout << q.front() << endl;
      else cout << "NONE\n";
    }
    else if(s == "POP"){
      if(!q.empty()) q.pop();
    }
  }
}

int main(){
  solve();
  return 0;
}