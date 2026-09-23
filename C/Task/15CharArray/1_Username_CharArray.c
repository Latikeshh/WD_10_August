#include<stdio.h>
int main(){
	char uid[1]={"ram"};
	char pass[2]={"R@123"};
	char user[1]={""};
	char password[1]={""};
	printf("Enter username\n");
	gets(user);
	printf("Enter Password\n");
	gets(password);
	if((strcmp(uid,user))&&(strcmp(pass,password))){
	printf(" Login Successfull\n");
	}else{
	printf("Invalid Credentials\n");
	}
}
