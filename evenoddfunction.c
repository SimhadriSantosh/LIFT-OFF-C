#include<stdio.h>
void evenoddfun(int n){
    if(n%2 == 0)
    printf("The no. is even");
    else
    printf("The no. is odd");
}
int main(){
    int n;
    printf("Enter any no.\n");
    scanf("%d",&n);
    evenoddfun(n);
    return 0;
}