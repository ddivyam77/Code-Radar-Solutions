#include<stdio.h>
int isprime();
int main(){
    int n;
    scanf("%d",&n);
    if(isprime())
}
int isprime(int n){
    if(n<=1){
        return 0;
    }
    else{
        for(int i==2; i<=n; i++){
            if(n%i==0){
              return 0;
            }
        }
        return 1 ;
    }
}