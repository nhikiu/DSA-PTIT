#include<bits/stdc++.h>

using namespace std;

int a[100], b[100] = {0}, check = 2, n, k, dem = 0;

void sinh(){
    int i = n;
    while (i >= 1 && b[i] == 1){
        b[i] = 0;
        i--;
    }
    if (i == 0) check = 0;
    else b[i] = 1;
}

void ktra(){
    int sum = 0;
    for (int i = 1; i <= n; i++){
        if (b[i] == 1) sum += a[i];
    }
    if (sum == k){
    	dem++;
        for (int i = 1; i <= n; i++){
            if (b[i] == 1) cout << a[i] << " ";
        }
        cout << endl;
    }
}

int main(){
    cin >> n >> k;
    check = 1;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    while(check){
        ktra();
        sinh();
    }
    cout << dem;
    return 0;
}
