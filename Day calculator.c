#include <stdio.h>
#include<string.h>
int main(){

int i = 0;
int j = 0;
int k = 0;
int l = 0;
char *days[] = {"Mon", "Tue", "Wed", "Thr", "Fri", "Sat", "Sun"};
char day1[10] ;
printf("enter day 1 : \n");
scanf("%s", &day1);
printf("enter date : \n");
scanf("%d", &j);
printf("calculating\n");
for(i=0;i<=6;i++){
l = strcmp(day1, days[i]);
    if( l == 0){
        k = (i+j-1)%7;
    }
}
printf("%s\n", days[k]);
}
