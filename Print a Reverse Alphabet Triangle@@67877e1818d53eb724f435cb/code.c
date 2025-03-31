#include<stdio.h>
int main(){
    int n;
    char ch;
    scanf("%d",&n);
    ch='A';
    for(int i=n; i>=1; i--){
for(int j =1; j<=n; j++){
    printf("%c",ch);
    ch++;
}
    }
}