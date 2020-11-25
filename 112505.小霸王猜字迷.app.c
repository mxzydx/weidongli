#include<stdio.h>
#include<windows.h>
void main(){
int a=6;
int x;
scanf("%d",&x);

if(x=a){
printf("恭喜猜对了");

}
else if(x>a){
printf("你猜得太大了");
}
else{
printf("你猜得太小了");
}

}
