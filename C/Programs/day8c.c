//Call by value
#include<stdio.h>
int show(int n){
	printf("\n before updation n=%d",n);
	n=n+1;
	printf("\n After updation n=%d",n);
}
int main(){
	int a=10;
	printf("\n Before fun call %d",a);
	show(a);
	printf("\n After fun call %d",a);
}
