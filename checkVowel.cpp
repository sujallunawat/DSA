#include<iostream>
#include<string>
using namespace std;

string toLower(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] - 'A' + 'a';
        }
    }
    return s;
}

int main(){
    string a = "aeiou";
    string b ;
    getline(cin,b);
    b = toLower(b);
    int arr1[26] = {0};
    int arr2[26] = {0};

    for(int i = 0 ; i<a.length() ; i++){
        int index = a[i] - 'a' ;
        arr1[index]++;
    }
        
    for(int j = 0 ; j<b.length() ; j++){
        int index = b[j] - 'a' ;
        arr2[index]++;
    }
    
    for (int i = 0; i < 26; i++) {
        if (arr1[i] > arr2[i]) {
            cout << "false";
            return 0;
        }
    }

    cout << "true";
    }