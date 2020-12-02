#include<stdio.h>
void main(){
int a,b,c,d;
printf("请输入数\n");
scanf("%d",&a);
b=a/3600;
c=(a%3600)/60;
d=a-3600*b-60*c;
printf("%d时 ",b);
printf("%d秒 ",c);
printf("%d分",d);


}
