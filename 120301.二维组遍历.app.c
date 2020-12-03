#include<stdio.h>
void main(){
int a;
int b;
int array[]={2050,2051,2052,2053};
int array2d[2][5]={
	{1,2,3,4,5},
	{6,7,8,9,10}

};

for(a=0;a<2;a++){
	for(b=0;b<5;b++){
		printf("%d ",array2d[a][b]);
	
	}
}


printf("\n");

}
