class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length()!=t.length()) return false;
        int arr[26] = {0};

        for(int i = 0 ; i<s.length() ; i++){
            int index = s[i] - 'a' ;
            arr[index]++;
        }

        int arr1[26] = {0};

        for(int i = 0 ; i<t.length() ; i++){
            int index1 = t[i] - 'a';
            arr1[index1]++;
        }

        for(int i = 0 ; i<26; i++){
            if(arr[i]!=arr1[i])
                return false;
        }

        return true ;
    }
};