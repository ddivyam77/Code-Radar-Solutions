
#include<stdio.h>
int main(){
   unsigned int a;
   scanf("%u",&a);
   unsigned int msb_mask=0X80000000;
  
   if(a&msb_mask){
    printf("Set\n");
   }
   else{
    printf("Not Set\n");
   }
} 