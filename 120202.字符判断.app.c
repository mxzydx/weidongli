#include<stdio.h>
void main(){
char a;
printf("你在点击上下左右键\n");
scanf("%c",&a);
switch(a){
case 'A':printf("你点击“上”键\n");break;
case 'S':printf("你点击“下”键\n");break;
case 'D':printf("你点击“左”键\n");break;
case 'W':printf("你点击“右”键\n");break;
default:printf("输入有误，请重新输入\n");


}

}
