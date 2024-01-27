#include<iostream>
#include<vector>
using namespace std;
bool is_sorted(vector<int>arr , int index = 0){
    if(index >= arr.size()-1)   return true;
    
    if(arr[index]>arr[index + 1]) return false;
    else return is_sorted(arr , ++index);
    
    
}
int main(){
    vector<int> arr= {1 , 9 , 3 , 4 , 5};
    
    bool sorted = is_sorted(arr);
    if(sorted) cout<<"true";
    else cout<<"false";
}