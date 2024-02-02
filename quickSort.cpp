#include<iostream>
using namespace std;

int pivotIndex(int arr[] , int s , int e){
    
    int pivot = arr[s];
    int count = 0 ;
    for(int i = s+1 ; i<=e ; i++ ){
        if(pivot>arr[i]){
            count++;
        }
    }

    int pivotIndex = s + count ;
    swap(arr[s],arr[pivotIndex]);
    int i = s ;
    int j = e ;

    while(i < pivotIndex  && j > pivotIndex){
            while(arr[i]<pivot) i++;

            while(arr[j]>pivot) j--;

            if(i < pivotIndex && j > pivotIndex ) {
                swap(arr[i],arr[j]);
            }

    }
    return pivotIndex;
}

void quickSort(int arr[] , int s , int e){
    if(s>=e) return ;

    int p = pivotIndex(arr , s , e);

    quickSort(arr , s , p-1);

    quickSort(arr , p+1 , e);
}

int main(){
    int arr [] = {1 ,4 ,7 ,9 ,  1, 3,  2 , 0};

    int n =  sizeof(arr)/sizeof(int);
    int start = 0 ;
    int end = n - 1 ;
    quickSort(arr , start , end);

    for(int i = 0 ; i<n ; i++ ){
        cout<<arr[i]<< " ";
    }
}