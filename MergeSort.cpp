#include<iostream>
using namespace std;

void merge(int arr[] , int start , int end){
    int mid = start + (end-start)/2;
    int len1 = mid - start + 1;
    int len2 = end - mid;
    //Create two array
    int *first = new int[len1];
    int *second = new int[len2];

    int k = start;

    for(int i = 0 ; i<len1 ; i++){
        first[i] = arr[k++];
    }
    k = mid + 1 ;

    for(int i = 0 ; i<len2 ; i++){
        second[i] = arr[k++];
    }

    int index1 = 0 ;
    int index2 = 0 ;
    k = start ;

    while(index1 < len1 && index2 < len2){
        if(first[index1]<second[index2]){
            arr[k++] = first[index1++];
        }
        else
            arr[k++] = second[index2++];
    }
    while(index1 < len1 ){
        arr[k++] = first[index1++];
    }
    while(index2 < len2){
          arr[k++] = second[index2++];
    }
}
void mergeSort(int arr[] , int s , int e){
    if(s>=e) return;
        int mid = s + (e-s)/2;
    mergeSort(arr , s , mid);
    mergeSort(arr , mid+1 , e);
    merge(arr , s , e);
}
int main(){
    int arr [] = { 4 , 6 , 2 , 0 , 5  , -1 , -1 ,-1 ,99 ,100 ,29 , 93 , 0};
    int n = sizeof(arr)/sizeof(int); ;

    mergeSort(arr , 0  , n-1);

    for(int i = 0 ; i<n ; i++){
        cout<<arr[i] << " ";
    }
}