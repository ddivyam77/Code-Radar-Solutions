int isprime(int num){
if(num<=1){
    return 0;
}
for(int i=2; i<=num; i++){
    if(i%2==0){
        return 0;
    }
}
return 1;
}