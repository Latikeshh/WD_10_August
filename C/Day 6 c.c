//#include<stdio.h>
////default function
//int ganpati_festival(){
//		printf("Day 1 Ganesh Chaturti\n");
//		printf("Day 2 Happy Ganesh Chaturti\n");
//	}
//	int add(){
//	int a=9,b=8,c;
//	c=a+b;
//	printf("%d, %d add of two num is %d\n",a,b,c);
//	}
//int main(){
//	ganpati_festival();
//	ganpati_festival();
//	add();
//}

#include<stdio.h>
//parameterised function
int add(int p,int q){
	int r =p+q;
	printf("addition of %d & %d is %d\n",p,q,r);
	}
int sub(int p,int q){
	int r =p-q;
	printf("subtraction of %d & %d is %d\n",p,q,r);
	}
int mul(int p,int q){
	int r =p*q;
	printf("multiplication of %d & %d is %d\n",p,q,r);
	}
int div(int p,int q){
	int r =p/q;
	printf("division of %d & %d is %d\n",p,q,r);
	}
int main(){
	int a,b;
	printf("Enter 1 no");
	scanf("%d",&a);
	printf("Enter 2nd no");
	scanf("%d",&b);
	add(a,b);
	sub(a,b);
	mul(a,b);
	div(a,b);
}

