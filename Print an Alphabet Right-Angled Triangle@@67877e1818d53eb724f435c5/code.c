// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     char ch;
//     for(char i=1; i<=n; i++){
//         ch='A';
//         for(char j=1;j<=i; j++){
            
//             printf("%c ",ch);
//             ch++;
//         }printf("\n");
//     }return 0;
// }
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    for(char i='1'; i<=n; i++){
      for(char j='1';j<=i; j++){
             printf("%c ",j);
          
        }printf("\n");
    }return 0;
}