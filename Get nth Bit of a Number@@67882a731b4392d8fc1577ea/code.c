#include<stdio.h>
int main(){
   int num,pos;
   scanf("%d %d",&num,&pos);
   int n_th_bit=(num>>pos)&1;
   printf("%d",n_th_pos);
} 