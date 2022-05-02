#include<stdio.h>
int largest(int arr[],int n){
    int large = arr[0];
    for(int i=1;i<n;i++){
        if(large< arr[i]){
            large= arr[i];
        }
    }
    return large;
}
int main(){

    int arr[]={1,3,34,53,56,78,99,123,33,45};
    
    printf("The largest element is %d",largest(arr,10));
    
    return 0;
}