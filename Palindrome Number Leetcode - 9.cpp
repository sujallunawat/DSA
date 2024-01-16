class Solution {
public:
    bool isPalindrome(int x) {
        long m,sum=0;
        long z=x;
        if(x<0){
            return false;
        }
        while(x!=0){
            m=x%10;
            sum=sum*10+m;
            x=x/10;
        }
        if(sum==z){
            return true;
        }
        else{
            return false;
        }
    }
};