#include<stdio.h>
int shop(){
    static int i;
    i++;
    printf("%d your token",i);
}
int main(){
    shop();
    shop();
    shop();
}