// for loop
//print " c programming "
//#include<stdio.h>
//int main(){
//	int i,j,k;
//	for(i=1;i<16;i++){
//		printf("%d C Programming\n",i);
//	}
//	
//	for(j=1;j<=4;j++){
//		for(k=1;k<=3;k++){
//		if(j%2==0){
//			printf("*");
//		}else{
//			printf("#");
//		}
//	}
//	printf("\n");
//	}

//while(i<=16){
//		printf("c programming \n");
//		i++;
//	}
//}


// for loop
//print " c programming "
#include<stdio.h>
int main(){
	int num=569876,i=0,j=1,k=0;
	while(num>0){
		j=num%10;
		num=num/10;
		k=j+k;
		i++;
	}
	printf("%d \n",k);
	
	i=1;
	do{
		printf("C programming \n");
		i++;
	}while(i<16);
}



