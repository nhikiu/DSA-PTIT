#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, check = 0;
    cin >> n;
    int a[n], mark[n], sum = 0;
    for(int i = 0; i < n; i++){
      cin >> a[i];
      sum += a[i];
      mark[i] = sum - a[i];
    }
    for(int i = 0; i < n; i++){
      if(mark[i] == sum - a[i] - mark[i]){
        check = 1;
        cout << i + 1 << endl;
        break;
      }
    }
    if(check == 0) cout << "-1\n";
  }
}