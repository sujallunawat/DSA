class Solution {
public:
    int climbStairs(int n) {
    int start = 0 ;
    int next = 1 ;
    int ans = 0 ;

    
    for(int i = 0 ; i<n ; i++){
         ans = start + next ;         
         start = next ;
         next = ans;
    }
    return ans;
 }

};