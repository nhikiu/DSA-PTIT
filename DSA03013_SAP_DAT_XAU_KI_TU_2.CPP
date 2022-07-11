#include<bits/stdc++.h>
using namespace std;

string s;
int d;

void solve(){
    cin >> d >> s;
    map<char, int> cou;
    int Max = 0;
    for (auto i:s) {
        cou[i]++;
        Max = max(Max, cou[i]);
    }
    Max > (s.size() + d - 1)/d ? cout << "-1\n" : cout << "1\n";
}

int main(){
  int t; cin >> t;
  while(t--){
    solve();
  }
  return 0;
}