class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0 ;
        int j = 0 ;
        int a ;
        while(i < s.length()){
            while( j < t.length() ){
                if(s[i] == t[j]){
                    i++;
                    j++;
                }
                else j++ ;

                a = j;
            }
             if(a >= t.length() && i < s.length()){
                 return false;
             }
       
        }
        return true;
    }
};