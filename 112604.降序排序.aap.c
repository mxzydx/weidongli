#include<stdio.h>
void main()
{
int a,b,c,x;
scanf("%d%d%d",&a,&b,&c);
if(a>b){
x=a;
a=b;
b=x;
}
if(a>c){

x=a;
a=c;
c=x;

}
if(b>c){
x=b;
b=c;
c=x;


}

printf("输出结果为降序\n%d%d%d\n",c,b,a);


}
