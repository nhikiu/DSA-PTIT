#include<bits/stdc++.h>
using namespace std;

void solve(){
  queue<long long> q;
  long long n;
  cin >> n;
  q.push(1);
  long long tmp = q.front(), cnt = 0;
  while(tmp % n != 0){
    cnt++;
    q.pop();
    q.push(tmp * 10);
    q.push(tmp * 10 + 1);
    tmp = q.front();
  }
  cout << tmp << endl;
}

int main(){
  int t;
  cin >> t;
  while(t--)
    solve();
  return 0;
}