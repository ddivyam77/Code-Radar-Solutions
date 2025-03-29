#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int s=1; s<=n-1; s++ ){
            printf(" ");
        }
        for(intj=1; j<=2*i-1;){
            printf("*");
        }
        printf("\n");
    }
     for(int i=n-1; i>1; i--){
        for(int s=1; s<=n-1; s++ ){
            printf(" ");
        }
        for(intj=1; j<=2*i-1;){
            printf("*");
        }
        printf("\n");
    }
}