#include<stdio.h>
int count(int i){
	if(i>0){
    printf("%d\n",i);
    count(i-1);
    }
}
int main(){
    int i;
    printf("Enter value for counting");
	scanf("%d",&i);
    count(i);
    printf("cool down is ended \n");
}
