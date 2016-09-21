#include <stdio.h>
int main(){
	
    int iVal = 443; // 10111011 00000001 00000000 00000000
int *ptr;           // 512          513     514     515
char *cptr;
ptr = &iVal;
printf("ptr = %d\n", ptr);
printf("*ptr = %d\n", *ptr);
ptr++;
printf("ptr = %d\n", ptr);
printf("*ptr = %d\n", *ptr);
cptr = &iVal;
printf("cptr = %d\n", cptr);
printf("*cptr = %d\n", *cptr);
cptr++;
printf("cptr = %d\n", cptr);
printf("*cptr = %d\n", *cptr);
puts("Press <enter> to quit:");
while (1) { sleep 36000; }
}
