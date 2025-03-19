#include<stdio.h>
void insertionSort(int arr[],int n){
    for(int i = 1; i<n; i++){
        int curr = arr[i];
        int prev = i-1;

        while (prev>=0 && arr[prev]>curr){
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n;i++){
        printf("%d",arr[i]);
    }
}
int main(){
    int n = 5;
    int arr[]={4,2,5,1,3};
    insertionSort(arr ,n);
    printArray(arr , n);
    return 0;
}