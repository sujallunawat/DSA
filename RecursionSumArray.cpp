#include<iostream>
#include<vector>
using namespace std;
int arrCount(vector<int> &arr , int index = 0 , int ans = 0 ){
    if(index > arr.size()-1 ) return ans ;
    
    
    ans = ans + arr[index];
    
    return arrCount(arr , ++index , ans);
}
int main(){
   vector<int> arr = { 2 , 3 , 5 , 10 , 4 };
   cout<<arrCount(arr);
}