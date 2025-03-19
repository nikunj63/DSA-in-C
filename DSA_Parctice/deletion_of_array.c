#include<stdio.h>
void display(int arr[], int n){
    for(int i =0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int arr[100] = {1,2,3,4},n = 4, index = 0 ;

    // for deletion
    for (int i = index; i<n-1; i++)
    {
        arr[i] = arr[i+1];
    }

    n--;

    display(arr,n);
    
    return 0;
    
}