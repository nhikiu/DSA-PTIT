#include<bits/stdc++.h>
using namespace std;

void solve(string s){
  int n = s.length();
  stack<long long> st;
  for(int i = 0; i < n; i++){
    if(isdigit(s[i])){
      s[i] = s[i] - '0';
      st.push(s[i]);
    }
    else{
      long long op2 = st.top();
      st.pop();
      long long op1 = st.top();
      st.pop();
      long long result;
      if(s[i] == '+') result = op1 + op2;
      else if(s[i] == '-') result = op1 - op2;
      else if(s[i] == '*') result = op1 * op2;
      else if(s[i] == '/') result = op1 / op2;
      else if(s[i] == '^') result = pow(op1, op2);
      st.push(result);
    }
  }
  cout << st.top() << endl;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    solve(s);
  }
  return 0;
}