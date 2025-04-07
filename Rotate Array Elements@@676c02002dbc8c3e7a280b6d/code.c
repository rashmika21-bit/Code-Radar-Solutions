#include<stdio.h>

void reverse(int arr[], int start, int end){
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateRight(int arr[], int n, int k){
    k%=n;
    if(k == 0) return;
    reverse(arr, 0, n-1);
    reverse(arr, 0, k-1);
    reverse(arr, k, n-1);
}
int main(){
    int n, k;
    printf("");
    scanf("%d", &n);
    int arr[n];

    printf("");
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter number of rotation: ");
    scanf("%d", &k);

    rotateRight(arr, n, k);
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;

}