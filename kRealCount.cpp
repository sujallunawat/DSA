#include<iostream>
using namespace std;
int main(){
    int n = 15 ;
    int k  = 3 ;
    bool arr[n+1] = {0};
    int count = 0 ;
    int a = k*k;
    for(int i = k ; i*k<n  ; i=i+k ){
             arr[i*k] = true;
        }
    
    
 int i = 1;
    while (i <= n) {
        if (arr[i] == false && i % k != 0) {
            arr[i] = true;
        }
        i++;
    }
    
        
    int j = 1 ;
    while(j<=n){
        if(arr[j] == false){
            count++;
        }
        j++;
    }
    cout<<count;
}