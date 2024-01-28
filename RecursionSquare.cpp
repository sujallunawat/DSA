#include<iostream>
using namespace std;
int ans = 1 ;
int getPower(int &a , int &b){
    if(b == 0 ) return a;
  
   ans = ans*a;
    getPower(a , --b );
    return ans;
}
int main(){
    int a = 3 ;
    int b = 3 ;

    cout<<getPower( a , b );
}