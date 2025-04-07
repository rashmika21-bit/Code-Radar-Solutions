#include<stdio.h>
int main(){
    int n;
    printf("");
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    if(isSorted(arr, n)){
        prinf("Sorted");
    } else{
        printf("Not Sorted");
    }
    
}
