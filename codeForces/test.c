#include<stdio.h>

int main(){
int a;
int b;
scanf("%d%d",&a,&b);
int Sum = a ;
while (a/b){ 
a=a-b+1;
//printf("6\n");

if(a>0)
Sum++;
}
printf("%d",Sum);

return 0;
}