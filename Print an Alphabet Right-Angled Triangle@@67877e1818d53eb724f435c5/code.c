#include<stdio.h>
int main(){
    int n;
    scanf("%c",&n);
    char ch;
    for(char i=1; i<=n; i++){
       
        for(char j=1;j<i; j++){
             ch='A';
            printf("%c ",ch);
            ch++;
        }printf("\n");
    }
}