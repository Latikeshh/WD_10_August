//If Else Statement
//#include<stdio.h>
//int main(){
//	int num=34;
//	if(num%2==0){
//		printf("It is even number %d\n",num);
//	}else{
//		printf("It is odd number %d\n",num);
//	}
//	
//	int no=-34;
//	if(no>0){
//		printf("It is +ve number %d",no);
//	}else{
//		printf("It is -ve number %d",no);
//	}
//	printf("\n Enter no to check +ve,-ve");
//	scanf("%d",&no);
//	if(no>0){
//		printf("It is +ve number %d",no);
//	}else{
//		printf("It is -ve number %d",no);
//	}
//	int age;
//	printf("Enter the correct age ");
//	scanf("%d",&age);
//	if(age==22){
//		printf("Please complete ur master with good marks\n");
//	}else if(age==25){
//		printf("Please complete ur Dev Course with excellent skills\n");	
//	}else if(age==26){
//		printf("Please Search Job at Software Company\n");	
//	}else{
//		printf("Go for Freelancing\n");	
//	}
//	int a,b,c;
//	printf("Enter the 3 numbers ");
//	scanf("%d %d %d",&a,&b,&c);
//	if(a>b&&a>c){
//		printf("a is greater then b,c %d",a);
//	}else if(b>a&&b>c){
//		printf("b is greater then a,c %d",b);
//	}else{
//		printf("c is largest",c);
//	}

//	int time=3;
//	switch(time){
//		case 7:
//			printf("Good Morning");
//		break;
//		case 3:
//			printf("Good Afternoon");
//		break;
//		case 4:
//			printf("Good Evening");
//		break;
//		case 10:
//			printf("Good night");
//		break;
//		default:
//			printf("Invalid input");
//	}

//char signal;
//	printf("\n\nEnter character  ");
//	scanf("%c",&signal);
//	
//	switch(signal){
//		case 'g':
//			printf("Go");
//		break;
//		case 'r':
//			printf("Stop");
//		break;
//		case 'y':
//			printf("ready to go");
//		break;
//		default:
//			printf("Invalid input");
//	}

//}

//Else if 
int main(){
int no=23;

if(no>0){
	if(no%2==0){
		printf("It is +ve and even");
	}else{
		printf("It is +ve but odd");
	}
}else{
	printf("It is -ve no");
}

}
