#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    char c[5];
    scanf("%s",&c);
    if (c=='+'){
        printf("%d",a+b);
    }
    else if(c=='-'){
        printf("%d",a-b);
    }
    else if(c=='*'){
        printf("%d",a*b);
    }
    else if(c=='/'){
        printf("%d",a/b)
    }
    else{
        printf("error");
    }

}