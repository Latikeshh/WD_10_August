#include<stdio.h>
int odd(int no){
    if(no>0){
        if(no%2!=0){
        printf("%d\n",no);      
        }
    odd(no-1);
    }
}
int main(){
    odd(13);
}
