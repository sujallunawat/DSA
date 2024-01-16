class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0 ;
        int j = s.size()-1 ;
        if(s.size()==0 || s.size()==1){
            return;
        }

       while(i<j){
          s[i] = s[i] ^ s[j];
          s[j] = s[i] ^ s[j];
          s[i] = s[i] ^ s[j];
           i++;
           j--;
       }
    }
};