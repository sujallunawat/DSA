class Solution {
public:
    int strStr(string s1, string s2) {
        for(int i = 0 ; i<s1.size() ; i++){
            string s = s1.substr(i,s2.length());

            if(s == s2 ){
                return i ;
            }

        }

        return -1;
    }

};