#include<stdio.h>
int print(int count){
    if(count>0){
    printf("%d\n",count);
    print(count-1);
    }
}
int main(){
    int i;
    printf("Enter value for reverse till 0  ");
	scanf("%d",&i);
    print(i);
}
