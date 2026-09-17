#include<stdio.h>
static int g=1;
//int update(){
//	int a=10;
//	static int b;
//	a=a+1;
//	b=b+1;
//	g=g+1;
//	printf("%d %d %d\n",a,b,g);
//}
int fact(int n){
	if(n>1){
		return n*fact(n-1);
	}else{
		return 1;
	}
}
int sum(int n){
	if(n>=1){
		return n+fact(n-1);
	}else{
		return 1;
	}
}
int main(){
	int a,b;
	printf("enter any number to find factorial of it ");
	scanf("%d",&a);
	g++;
	printf("Factorial of %d is %d\n",a,fact(a));
	g++;
	printf("global static %d\n",g);
	printf("\nenter any number to find sum of it ");
	scanf("%d",&b);
	printf("Sum of %d is %d",b,sum(b));
}
