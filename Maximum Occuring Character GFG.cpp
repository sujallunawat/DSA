#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    int arr[26] = {0};
    char maxOcc(string s){
        
      for(int i = 0 ; i<s.length() ; i++){
        char ch;
        ch = s[i];
        int number = 0 ;
        number =  ch - 'a' ;
        arr[number]++;
        
      }
        int maxi =  -1 ;
        int ans = 0 ;
        
        for(int i = 0 ; i<26 ; i++){
            if(maxi<arr[i]){
                ans = i ;
                maxi = arr[i];
            }
        }
        return ans + 'a';
    }

    char getMaxOccuringChar(string str)
    {
        return maxOcc(str);
    }

};

//{ Driver Code Starts.

// int main()
// {
   
//     int t; 
//     cin >> t;
//     while(t--)
//     {
//         string str;
//     cin >> s  >> t >> r;
//     	Solution obj;

//     }