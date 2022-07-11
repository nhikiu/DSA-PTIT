#include<bits/stdc++.h>
using namespace std;

int n, k, a[100], b[100], cau_hinh_cuoi_cung, dem = 1;

void khoi_tao(){
    for (int i = 1; i <= k; i++){
        b[i] = i;
    }
}


void sinh(){
    int i = k;
    while(i >= 1 && b[i] == dem - k + i - 1){
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

void display(){
    for (int i = 1; i <= k; i++){
        cout << a[b[i]] << " ";
    }
    cout << endl;
}

int main(){
    cau_hinh_cuoi_cung = 0;
	map<int,int> m;
	int arr[100];
    cin >> n >> k;
    for (int i = 1; i <= n; i++){
        cin >> arr[i];
        m[arr[i]]++;
    }

	for (auto x = m.begin(); x != m.end(); x++) {
        a[dem] = x->first;
        dem++;
    }
    khoi_tao();
    while(!cau_hinh_cuoi_cung){
        display();
        sinh();
    }

	return 0;
}