#include<bits/stdc++.h>
using namespace std;

deque<int> de;
string s;
int x;

void solve(){
  cin >> s;
  if(s == "PUSHFRONT"){
    cin >> x;
    de.push_front(x);
  }
  else if(s == "PRINTFRONT"){
    if(!de.empty()) cout << de.front() << endl;
    else cout << "NONE\n";
  }
  else if(s == "POPFRONT"){
    if(!de.empty()) de.pop_front();
  }
  else if(s == "PUSHBACK"){
    cin >> x;
    de.push_back(x);
  }
  else if(s == "PRINTBACK"){
    if(de.empty()) cout << "NONE\n";
    else cout << de.back() << endl;
  }
  else if(s == "POPBACK"){
    if(!de.empty()) de.pop_back();
  }
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}