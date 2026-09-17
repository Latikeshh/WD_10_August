#include<stdio.h>
int even(int no){
    if(no>0){
        if(no%2==0){
        printf("%d\n",no);      
        }
    even(no-1);
    }
}
int main(){
    even(12);
}
