class Solution {
public:
    
    //Method 3: Using Cumulative/Prefix Sum  Time: O(N)  Space: O(1) => Space Optimised.
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        int maxx = prices[n - 1];
        int ans = 0;

        for(int i=n-1; i>=0; i--){

            maxx = max(prices[i], maxx);
            ans = max(maxx-prices[i], ans);
        }

        return ans;
    }
    
    
    //Method 2: Cumulative Sum/Prefix Sum:  Time: O(N)  Space: O(N)
    
//     int maxProfit(vector<int>& prices) {
//         int n = prices.size();

//         vector<int> vec(n);
//         int maxx = prices[n-1];
        
//         for(int i=n-1; i>=0; i--){
//             maxx = max(maxx, prices[i]);
//             vec[i] = maxx;
//         }
        
//         int ans = 0;
//         for(int i=0; i<n; i++){
//             ans = max(ans, vec[i]-prices[i]);
//         }
        
//         return ans;
//     }
    
    
    //Method 1: Brute Force: Time: O(N^2)  Space: O(1)  ----> (TLE Error) (198/211 Test Case Passed)
    
//     int maxProfit(vector<int> &prices){
//         int n = prices.size();
        
//         int maxm = 0;
//         for(int i=0; i<n; i++){
//             for(int j=i+1; j<n; j++){
//                 maxm = max(maxm, prices[j]-prices[i]);
//             }
//         }
        
//         return maxm;
//     }
    
    
};
