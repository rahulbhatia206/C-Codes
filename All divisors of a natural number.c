#include<stdio.h>
int main(){

int T = 0;
int n = 0;
int i = 1;
int j = 0;
int a[30][100] = {0};

scanf("%d", &T);

for(i=1;i<=T;i++){

    scanf("%d", &n);
    for (j=0;j<n;j++){

        if(n % n-j == 0){
            a[i][j] = n-j;
        }
        else {
        a[i][j] = 0;
    }
    }
}

for(i=1;i<=T;i++){
   for (j=0;j<=n;j++){
        if(a[i][j] != 0){
    printf("%d ", a[i][j]);
   }
   }
   printf("\n");
}

}
