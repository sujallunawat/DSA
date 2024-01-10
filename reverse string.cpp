#include <iostream>
#include <vector>
using namespace std;

vector<char> reverse(vector<char>& c, int s, int e) {
    while (s < e) {
        swap(c[s], c[e]);
        s++;
        e--;
    }
    return c;
}

int main() {
    string input;
    getline(cin,input); // Read the entire line

    vector<char> c(input.begin(), input.end()); // Convert the string to a char vector

    int j = 0;
    for (int index = 0; index < c.size(); index++) {
        if (c[i] == ' ') {
            reverse(c, j, i - 1); // Reverse the word between j and i-1 (excluding space)
            j = i + 1; // Update j for the next word
        }
    }

    // Reverse the last word (or the only word if there's no space)
    reverse(c, j, c.size() - 1);

    for (char ch : c) {
        cout << ch;
    }
    cout<<endl;

    return 0;
}
