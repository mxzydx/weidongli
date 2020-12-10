#include<stdio.h>
#include<string.h>
void main(){
char x[20];
char a[]="春节";
char b[]="中秋节";
char c[]="端午节";
char d[]="元宵节";
printf("欢迎使用该程序\n");
scanf("%s",&x);
if(strcmp(a,x)==0){
	printf("给我安排饺子\n");

}
 else if(strcmp(b,x)==0){
	printf("给我安排月饼\n");

}
else if(strcmp(c,x)==0){
	printf("给我安排粽子\n");

}
else if(strcmp(d,x)==0){
	printf("给我安排汤圆\n");

}

else{
printf("我啥都吃\n");



}
