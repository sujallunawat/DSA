class Solution {

    bool isEqual(int a[26] ,int b[26]){
        for(int i = 0 ; i<26 ; i++){
            if(a[i]!=b[i]){
                return 0 ;
            }

           
        }
         return 1 ;
    }
public:
    bool checkInclusion(string s1, string s2) {
        int arr1[26] = {0};
            int i = 0 ;

            // string count of string 1 ;
        for(int i = 0 ; i<s1.length() ; i++){
            int index = s1[i] - 'a';
            arr1[index]++; 
        }

        //creating a window for s2 and the size will be as the size of s1 ;
        int arr2[26] = {0};

        while(i<s1.length() && i<s2.length()){
            int index2 = s2[i] - 'a' ;
            arr2[index2]++;
            i++;
        }

        if(isEqual( arr1 , arr2 )){
            return 1 ;
        }

        while(i<s2.length()){
            int index3 = s2[i] - 'a' ;
            arr2[index3]++;
           

            int index4 = s2[i-s1.length()] - 'a';
            arr2[index4]--;
            i++;
            if(isEqual( arr1 , arr2 )){
            return 1 ;
            }
             
        }


    return 0 ;

    }
};