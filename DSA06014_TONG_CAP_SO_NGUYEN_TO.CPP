#include<bits/stdc++.h>
using namespace std;

int check(int n){
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) return 0;
    }
    return 1;
}

int solve(int n){
    for (int i = 2; i <= n / 2; i++){
        if (check(i) && check(n - i)) return i;
    }
    return -1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if (solve(n) > 0) cout << solve(n) << " " << n - solve(n);
        else cout << -1;
        cout << endl;
    }
    return 0;
}