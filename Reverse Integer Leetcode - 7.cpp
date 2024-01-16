class Solution {
public:
    int reverse(int x) {

        int  Ndigit = 0 ;
        int ans = 0 ;  

        int i = 0 ;       

        while(x){
            Ndigit = x % 10 ;
             if ( ans>INT_MAX/10 || ans<INT_MIN/10 ) return 0;

            ans = (ans * 10 ) + Ndigit ;

            x = x/10;

            i++;

        }
       
        return ans ;
        
    }

};