#include<bits/stdc++.h>
using namespace std;

int n, k, a[100], b[100], cau_hinh_cuoi_cung;

void khoi_tao(){
    for (int i = 1; i <= k; i++){
        b[i] = i;
    }
}


void sinh(){
    int i = k;
    while(i >= 1 && b[i] == n - k + i){
        i--;
    }
    if(i == 0){
        cau_hinh_cuoi_cung = 1;
    }
    else{
        b[i]++;
        for (int j = i + 1; j <= k; j++){
            b[j] =  b[j - 1] + 1;
        }
    }
}

int check(){
    for(int i = 1; i <= k; i++){
        if(a[i] != b[i]) return 0;
    }
    return 1;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        int count = 1;
        cau_hinh_cuoi_cung = 0;
        cin >> n >> k;
        for (int i = 1; i <= k; i++) cin >> a[i];
        khoi_tao();
        while(!cau_hinh_cuoi_cung && check()==0){
            count++;
            sinh();
        }
        cout << count << endl;
    }
	return 0;
}
