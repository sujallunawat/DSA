#include<iostream>
using namespace std;
int main(){
    int start = 0 ;
    int end = 4 ;
    int arr[5] = {8 , 10 , 17 , 1 , 3};
    
    while(start<end){
        int mid = start + (end-start)/2 ;
        if(arr[mid]>=arr[0]){
            start = mid + 1 ;
        }
        else
        {
            end = mid ;
        }
    }
    
    cout<<arr[start];
}
