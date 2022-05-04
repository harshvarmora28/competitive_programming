#include<stdio.h>
int fib(int n){
    int a=0,b=1,c,i;
    if(n==0)
    return a;
    else if (n==1)
    return b;
    for(i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",b);
    }
    return 0;
    
}
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    printf(fib(n));
    return 0;
}