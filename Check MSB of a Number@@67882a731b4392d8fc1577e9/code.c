
#include<stdio.h>
int main(){
   unsigned int a;
   scanf("%u",&a);
   unsigned int msb_mask=0*80000000;
    printf("Set\n");
   if(a&msb_mask){
    printf("Set");
   }
   else{
    printf("Not Set");
   }
} 