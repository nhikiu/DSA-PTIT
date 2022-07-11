#include<stdio.h>
#define max 100

int n, check[max] = {0}, a[max];

void in(){
    for(int i = 1; i <= n; i++){
        printf("%d", a[i]);
    }
    printf(" ");
}

void Try(int k){
    for(int i = 1; i <= n; i++){
        if(!check[i]){
            a[k] = i;
            check[i] = 1;
            if(k == n) in();
            else Try(k + 1);
            check[i] = 0;
        }
    }
    return;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
	    scanf("%d", &n);
	    Try(1);
		printf("\n");
	}
}
