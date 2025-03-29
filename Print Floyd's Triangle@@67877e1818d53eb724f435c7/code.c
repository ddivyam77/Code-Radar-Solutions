#include<stdio.h>
int main(){
    int n;
    int num;
    scanf("%d",&n);
   
    for(int i=1; i<=n; i++){
        num=1;
        for(int j=1; j<=i; j++){
printf("%d ",num);
num++;
        }printf("\n");
    }
}