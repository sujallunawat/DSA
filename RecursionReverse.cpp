#include<iostream>
#include<string>
using namespace std;

string ans = "";

string reverseString(string s, int index = 0) {
    if (index > s.length() - 1) {
        return ans;
    }

    ans = s[index] + ans;
    return reverseString(s, ++index);
}

int main() {
    string s = "sujal";
    cout << reverseString(s);
}