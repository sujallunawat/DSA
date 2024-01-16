#include<iostream>
using namespace std ;

 int getpivot(int arr[]  , int n  ){
     int start = 0 ;
     int end  = n -1 ;
      int mid ;
     
     while(start<end){
          mid = start + (end-start)/2 ;
          
          if(arr[mid]>=arr[0]){
              start = start +1 ;
          }
          else
                end = mid ;
                
     }
     
     
   return start ;  
 }
 
 int binarysearch(int arr[] , int s , int e , int n , int target){
     int start = s ;
     int end = e ;
     int ans = -1;
     int mid ;
     while(start<=end){
         
          mid = start + (end-start)/2 ;
         
         if(arr[mid] == target){
             ans = mid ;
             start = mid + 1 ;
         }
         
         if(arr[mid] > target){
             end = mid - 1 ;
         }
         else
            start = mid + 1 ;
     }
     return ans ;
}
 
 
 
 
 
int main (){
    int n = 8 ;
    int arr[n]={4 ,5 , 6 , 7 , 0 , 1,1,2};
    int key = 1 ;
    
    
   int pivot = getpivot( arr ,  n );
   
   if(arr[pivot]<=key && key<=arr[n-1]){
       
       cout<<binarysearch( arr , pivot , n-1 , n , key);
        
    }
    else
        cout<<binarysearch( arr , 0 , pivot-1, n , key);
}