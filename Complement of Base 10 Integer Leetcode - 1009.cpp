class Solution {
public:
    int bitwiseComplement(int n) {
        int arp = n ;
         int mask = 0 ;
      if(arp==0) return 1 ;
        while(arp){
             
              mask = ( mask<<1 ) | 1 ;
              arp = arp>>1;
        }

        return (~n)&mask;

    }
};