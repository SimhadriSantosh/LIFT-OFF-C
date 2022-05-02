#include<stdio.h>
int gcd(int x,int y){
	if(y!=0){
		return gcd(y,x%y);
	}
	else{
		return x;
	}
}
int main(){
    int a,b;
    printf("Enter 2 nos. \n");
    scanf("%d %d",&a,&b);
    if(a>b)
    printf("The GCD of given 2 nos is %d", gcd(a,b) );
    else
    printf("The GCD of given 2 nos is %d", gcd(b,a) );
    return 0;
}