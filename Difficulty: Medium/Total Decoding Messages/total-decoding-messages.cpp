//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  int f(int idx, string &digits,vector<int>&dp){     
if(idx==digits.size()) return 1;
        int num = 0;
        int ways = 0;
        if(dp[idx]!=-1) return dp[idx];
        for(int i = idx;i<digits.size();i++){
            num = (num*10)+(digits[i]-'0');
            if(num<=26 && num>0){
                ways += f(i+1,digits,dp);
            }
            else if(num==0 || num>26) return dp[idx] = ways;
            
        
        }
        return dp[idx] = ways;
    }
    int countWays(string &digits) {
        // Code here
        vector<int>dp(digits.size(),-1);
        return f(0,digits,dp);
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        string digits;
        getline(cin, digits);
        Solution obj;
        int ans = obj.countWays(digits);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends