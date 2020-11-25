#include<stdio.h>
void main()
{
int a;
printf("QS大学排名");
scanf("%d",&a);
if(a==1){
	printf("哈佛大学");
}
else if(a==2){
printf("牛津大学");
}
else if(a==3){
printf("清华大学");
}
else if(a==4){
printf("北京大学");
}
else if(a==5){
printf("浙江大学");
}
else if(a==6){
printf("武汉大学");
}
else if(a==7){
printf("中国科技大学");
}
else if(a==8){
printf("人民大学");
}
else if(a==9){
	printf("南京大学");
}
else if(a==10){
	printf("广西大学");
}
else
{
printf("排名太靠后，请输入1-10");
}
}
