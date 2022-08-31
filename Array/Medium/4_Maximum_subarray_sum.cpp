class Solution {
public:
    
    //Approach 3: Kadane's Algorithm  Time: O(N) 
    int maxSubArray(vector<int> &nums){
        
        int n = nums.size();
        
        int maxSum = nums[0];
        int curSum = 0;
        
        for(int i=0; i<n; i++){
            curSum = max(nums[i], nums[i]+curSum);
            maxSum = max(maxSum, curSum);
        }
        
        return maxSum;
    }
        
        
    //Approach 2: Cumulative Sum / Prefix Sum  Time: O(N^2)  (TLE Error 203/209 Test case Passed)
//     int maxSubArray(vector<int>& nums) {
        
//         int n = nums.size(); 
//         int maxSum = nums[0];
        
//         for(int i=0; i<n; i++){
            
//             int sum = 0;
            
//             for(int j=i; j<n; j++){
//                 sum = sum + nums[j];
//                 maxSum = max(sum, maxSum);
//             }
//         }
        
//         return maxSum;
        
//     }
    
        
    //Approach 1: Brute Force.  Time: O(N^3)  (TLE Error) (200/209 Test case Passed)
    
//     int maxSubArray(vector<int>& nums) {
        
//         int n = nums.size(); 
        
//         int maxSum = nums[0];
        
//         for(int i=0; i<n; i++){
//             for(int j=i; j<n; j++){
                
//                 int sum = 0;
//                 for(int k = i; k<=j; k++){
//                     sum = sum + nums[k];
//                 }
                
//                 maxSum = max(sum, maxSum);
//             }
//         }
        
//         return maxSum;
        
//     }
};
