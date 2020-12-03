#include<stdio.h>
#include<windows.h>
void main(){
int a;
int b;
int array2d[10][20]={
	{1,2,3,4,5,6,7,8,9},
	{11,12,13,14,15,16}

};
for(a=0;a<10;a++){
	for(b=0;b<20;b++){
		array2d[a][b]=999;
		printf("%d ",array2d[a][b]);
Sleep(100);
	}
printf("\n");
}
Sleep(100);
for(a=0;a<10;a++){
	for(b=0;b<20;b++){
	array2d[a][b]=0;
		printf("%d ",array2d[a][b]);
	}
printf("\n");
}

for(a=0;a<10;a++){
	for(b=0;b<20;b++){
		array2d[a][b]=999;
		printf("%d ",array2d[a][b]);
Sleep(100);
	}
printf("\n");



}

}
