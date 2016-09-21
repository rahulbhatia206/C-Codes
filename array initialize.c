#include <stdio.h>
int main(){

int i = 0;
int a[4][5];

a[1][5] =! 5;
a[2][1] =  54;
a[3][2] = 2;
a[4][3] = 3;

for(i=0;i<=5;i++)
printf("%d ", a[i]);

}
