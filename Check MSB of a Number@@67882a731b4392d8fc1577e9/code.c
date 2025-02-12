#include<stdio.h>
int main(){
   unsigned char a;
   scanf("%c",&a);
   unsigned char msb_mask=0*80000000;
    printf("Set\n");
   if(a&msb_mask){
    printf("Set");
   }
   else{
    printf("Not Set");
   }
} 