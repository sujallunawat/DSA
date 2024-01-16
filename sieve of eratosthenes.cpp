#include<iostream>
#include<vector>
using namespace std;
int main(){
      int n ;
     cin >> n ;
     int count = 0 ;
      vector<bool>arr(n+1 , true);
     for(int i = 2 ; i<n ; i++){
            
         if(arr[i]){
             count++;
             
             for(int j = i*2 ; j<n ; j= j+i){ arr[j] = false ;}
             
         }
         
     }
     cout<< count;
}