#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    scanf("%s",&ch);
    if(issupper(ch)){
        printf("Uppercase");
    }
    else if(islower(ch)){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
}