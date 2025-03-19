#include<stdio.h>
void selectionSort(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        int smallestIdx = i;
        for(int j = i+1; j < n;  j++){
            if(arr[j] < arr[smallestIdx]){
                smallestIdx = j;
            }
        }

        int temp = arr[i];
        arr[i]=arr[smallestIdx];
        arr[smallestIdx]=temp;
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n;i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int n =5;
    int arr[]={4,2,5,1,3};
    selectionSort(arr ,n);
    printArray(arr , n);
    return 0;

}