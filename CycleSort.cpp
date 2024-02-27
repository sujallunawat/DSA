#include<iostream>
using namespace std;
int main(){
    int arr[5] = {5,4,3,2,1};

    int i = 0 ;
    while(i<5){
        if(arr[i] == i+1) i++;
        else{
            swap(arr[i],arr[arr[i]-1]);
        }
    }

    for(int i = 0 ; i<5 ; i++){
        cout<<arr[i]<<" ";
    } 
}