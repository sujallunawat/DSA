class Solution {
public:
    bool isIsomorphic(string s, string t) {

    if(s.length()!=t.length()) return 0 ;

     int arr[128] = {0};
     int arr1[128] = {0};
     
     for(int i = 0 ; i<s.length(); i++){
            if(arr[s[i]]!=arr1[t[i]]) return 0 ;
            else{
                arr[s[i]] = i+1 ;
                arr1[t[i]] = i+1 ;
            }
     } 
     return true;  
    }
};