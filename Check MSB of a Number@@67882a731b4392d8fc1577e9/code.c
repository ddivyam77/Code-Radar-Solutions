#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int result=a&msb_mask;
   if(result==1){
    printf("Set\n");
   }
   else{
    printf("Not Set");
   }
} 