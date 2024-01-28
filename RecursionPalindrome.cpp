#include<iostream>
#include<string>
using namespace std;
bool checkPalindrome(string s , int i , int j){
    if(s[i]!=s[j]) return false;

    if(i>=j) return true;

    return checkPalindrome(s , ++i , --j);
}
int main(){
    string s = "madams";

    
    if(checkPalindrome(s , 0 , s.length()-1)) cout<<"true";
    else cout<<"false";
}