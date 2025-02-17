#include<stdio.h>
int isprime(int a);
int main(){
    int a;
    scanf("%d",&a);
    int isprime(int a){
    if(a<=1){
        return 0;
    }
    else{
for(int i=2; i<=a; i++){
    if(a%i==0){
        return 0;
    }}
    return 1;
}

}
if isprime(n){
    printf("Prime");
}
else{
    printf("Odd");
}
}