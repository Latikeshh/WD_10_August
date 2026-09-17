#include<stdio.h>
int student(){
    static int c;
    c++;
    printf("%d total student %d",c);
}
int main(){
    student();
    student();
    student();
}