//3D Array
//#include<stdio.h>
//int main(){
//	int c1[3][2][3]={{{11,22,33},{44,55,66}}, {{77,88,99}, {14,34,56}}, {{98,76,85}, {90,80,70}}};
//	int d,r,c;
//	for(d=0;d<3;d++){
//		for(r=0;r<2;r++){
//			for(c=0;c<3;c++){
//			printf("%d ",c1[d][r][c]);
//			}
//			printf("\n");
//		}
//		printf("\n");
//	}
//}

#include<stdio.h>
#include<string.h>
int main(){
	char fname[30];
	printf("Enter You Name ");
//	scanf("%s",&name);	
	gets(fname);
	printf("Your name is ");
	puts(fname);
	int length = strlen(fname);
	printf("%d \n",length);
	printf("\n Upper Case \n");
	printf(strupr(fname));
	printf("\n  Lower Case\n");
	printf(strlwr(fname));
	printf("\n Reverse \n");
	printf(strrev(fname));
	
}
