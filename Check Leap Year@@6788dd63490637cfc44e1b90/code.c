#include<stdio.h>
int main(){
    int a;
    scanf("%d\n",&a);
    if(a%100==0&&a%4==0){
    printf("Leap Year");
}

else{
    printf("Not a Leap Year");
}}