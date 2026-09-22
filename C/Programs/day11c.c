//1D
#include<stdio.h>
int main(){
//	int num[5];
//	num[0]=11;
//	num[1]=12;
//	num[2]=34;
//	num[3]=44;
//	num[4]=55;
//	int i;
//	for(i=0;i<5;i++){
//		printf("%d \n",num[i]);
//	} 
int mark[3][2]={{11,22},{33,44},{55,66}};
int r,c;
for(r=0;r<3;r++){
	for(c=0;c<2;c++){
		printf("%d ",mark[r][c]);
	}
	printf("\n");
}
}
