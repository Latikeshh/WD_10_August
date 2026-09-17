#include<stdio.h>
int table(int no){
	static int j=1;
    if(j<=10){
    	int i=no*j;
    	printf("%d x %d = %d\n",no,j,i);
    	j++;
    	table(no);
    }
}
int main(){
    table(12);
}

