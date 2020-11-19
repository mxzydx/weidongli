#include<stdio.h>
void main(){
int x;
printf("输出男女\n");
scanf("%d",&x);
if(x==0){
	printf("女\n");

}
else if(x==1){
printf("男\n");

}
else {
printf("输入有误，请重新输出\n");
}
}
