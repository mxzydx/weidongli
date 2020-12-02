#include<stdio.h>
void main(){
int a;
scanf("%d",&a);
printf("程序\n");
switch(a){
case 1:printf("牛津大学\n");break;
case 2:printf("剑桥大学\n");break;
case 3:printf("斯坦福大学\n");break;
case 4:printf("麻省理工学院\n");break;
case 5:printf("加利福尼亚理工学院\n");break;
case 6:printf("哈佛大学\n");break;
case 7:printf("普林斯顿大学\n");break;
case 8:printf("耶鲁大学\n");break;
case 9:printf("帝国理工学院\n");break;
case 10:printf("芝加哥大学\n");break;
case 11:printf("苏黎世联邦理工学院\n");break;
case 12:printf("约翰霍普金斯大学\n");break;
case 13:printf("宾夕法尼亚大学\n");break;
case 14:printf("伦敦大学学院\n");break;
case 15:printf("加州大学伯克利分校\n");break;
case 16:printf("哥伦比亚大学\n");break;
case 17:printf("加州大学洛杉矶分校\n");break;
case 18:printf("杜克大学\n");break;
case 19:printf("康奈尔大学\n");break;
case 20:printf("密歇根大学安娜堡分校\n");break;
default:printf("输入有误，请输入1-20\n");
}

}
