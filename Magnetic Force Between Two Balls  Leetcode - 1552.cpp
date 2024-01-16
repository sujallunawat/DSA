class Solution {
public:

  bool ispossible(vector<int>arr,  int m , int mid){
      int lastposition = arr[0];
      int cow = 1 ;

      for(int i = 0 ; i<arr.size() ; i++){
          if(arr[i] - lastposition >= mid ){
              cow++ ;
              lastposition = arr[i];
          }
      }
      return cow >= m ;
  }
    int maxDistance(vector<int>& position, int m) {
        int maxi = 0 ;
        int ans ;
        sort(position.begin(),position.end());
        for(int i = 0 ; i<position.size();i++){
            maxi = max(maxi , position[i]);
        }
        
        int start = 0 ;
        int end = maxi ;
        int mid ;
        while(start<=end){
            mid = start + ((end - start)>>1);

            if(ispossible(position , m , mid)){
                ans = mid ;
                start = mid+1;
            }
            else{
                end = mid-1;
            }

        }
        return ans ;
    }
};