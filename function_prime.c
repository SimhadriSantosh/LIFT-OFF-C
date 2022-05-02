#include<stdio.h>
#include<stdbool.h>
bool isprime(int n,int m){
    if(n==m)
    return true;
    else if(n%m==0)
    return false;
    else
    return isprime(n,m+1);
}
int main(){
    int n;
    printf("Enter any no. \n");
    scanf("%d",&n);
    if(isprime(n,2)){
        printf("The entered no. is prime");
    }
    else
    printf("The entered no. is composite");
    return 0;
}