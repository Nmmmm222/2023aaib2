#include <stdio.h>
int main(){
int a,b;
printf("請輸入兩個整數:");
scanf("%d %d",&a,&b); //scandf要加&符號
printf("%5d\n",a); //印出來,5格的整數,要加跳行
printf("%5d\n",b);
printf("------------\n");
printf("%d",a+b);
}
