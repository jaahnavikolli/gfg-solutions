class Solution {
  public:
    int substrCount(string &s, int k) {
        // code here
         vector<int> freq(26,0);
        int n = s.length();
        int distinct = 0;
        int result = 0;
        int i = 0;
        int j = 0;
        while(j<n){
            if(freq[s[j]-'a' ]==0){
                distinct++;
            }
            freq[s[j]-'a']++;
            if(j-i+1>k){
                freq[s[i]-'a']--;
                if(freq[s[i]-'a'] ==0)distinct--;
                i++;
            }
            if(j-i+1==k){
                if(distinct==k-1)result++;
            }
            j++;
        }
        return result;
    }
};