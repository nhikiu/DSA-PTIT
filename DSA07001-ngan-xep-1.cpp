#include<bits/stdc++.h>
using namespace std;

vector<int> v;

void solve(){
  string s;
  int n;
  while(cin >> s){
    if(s == "push"){
      cin >> n;
      v.push_back(n);
    }
    else{
      if(s == "pop"){
        v.pop_back();
      }
      else if(s == "show"){
        if(v.size() == 0) cout << "empty\n";
        else{
          for(int x : v){
            cout << x << " ";
          }
          cout << endl;
        }
      }
    }
  }
}

int main(){
  solve();
  return 0;
}