#include<bits/stdc++.h>
using namespace std;

int priority(char a){
  if(a == '+' || a == '-') return 1;
  if(a == '*' || a == '|') return 2;
  if(a == '^') return 3;
  return -1;
}

void trung_to_hau_to(string s){
  int n = s.length();
  stack<char> st;
  string ans = "";
  for(int i = 0; i < n; i++){
    if(s[i] == '(') st.push(s[i]);
    else if(isupper(s[i]) || islower(s[i])) ans += s[i];
    else if(s[i] == ')'){
      while(!st.empty() && st.top() != '('){
        char c = st.top();
        st.pop();
        ans += c;
      }
      if(st.top() == '(') st.pop();
    }
    else{
      while(!st.empty() && priority(s[i]) <= priority(st.top())){
        char c = st.top();
        st.pop();
        ans += c;
      }
      st.push(s[i]);
    }
  }
  while(!st.empty()){
    char c = st.top();
    if(c != '('){
      ans += c;
    }
    st.pop();
  }
  cout << ans << endl;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    trung_to_hau_to(s);
  }
  return 0;
}