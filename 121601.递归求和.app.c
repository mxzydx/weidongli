#include<stdio.h>
int myFunction(int x){
	if(x<=0){
	return 0;
	}
	return x+myFunction(x-1);
}
void main(){
int a;
scanf("%d",&a);

printf("%d\n",myFunction(a));



}
