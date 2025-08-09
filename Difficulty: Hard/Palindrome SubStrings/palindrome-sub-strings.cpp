class Solution {
  public:
    int countPS(string &s) {
        // code here
        int n = s.size(); 
      int count = 0; 
      for(int i= 0; i<n-1; i++){
          
          int j = i-1; 
          int k = i+1; 
          
          while(j>=0 && k<n){
              if(s[j]==s[k]){
                  count++; 
                  j--; 
                  k++; 
              }else{
                  break; 
              }
          }
          
           j = i; 
           k = i+1; 
          
          while(j>=0 && k<n){
              if(s[j]==s[k]){
                  count++; 
                  j--; 
                  k++; 
              }else{
                  break; 
              }
          }
      }
      
      return count; 
    }
};