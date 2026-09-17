#include<stdio.h>
int atm(){
    static int c;
    c++;
    printf("trnsaction couting %d",c);
}
int main(){
    atm();
    atm();
    atm();
}