#include<stdio.h>
struct emp{
	char name[10];
	int id;
	
}e1;

int main(){
	strcpy(e1.name,"abcd");
	e1.id=1011;
	printf("Username = %s \n",e1.name);
	printf("Emp id is = %d \n",e1.id);
}
