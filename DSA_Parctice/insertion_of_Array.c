#include<stdio.h>
void display(int arr[], int n){
    for(int i =0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int arr[100] = {2,3,4}, n = 3 , index  = 0 , element = 1;
   

    // for insertion
    for (int i = n; i>=index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;

    n++;

    display(arr,n);
    
    return 0;
    
}