class Solution {
public:
    
    //Approach 2: Bit Manipulation
    int missingNumber(vector<int> &nums){
        
        int n = nums.size();
        
        int xorr = n;
        for(int i=0; i<n; i++){
            xorr = xorr ^ nums[i];
            xorr = xorr ^ i;
        }
        
        return xorr;
    }
    
    
    //Approach 1: Mathematical Way => Sum of N Number Formula => n(n+1)/2;
//     int missingNumber(vector<int>& nums) {
        
//         int n = nums.size();
        
//         int sum = 0;
//         for(int i=0; i<nums.size(); i++){
//             sum = sum + nums[i];
//         }
        
//         int ans = (n*(n+1)/2) - sum;
        
//         return ans;
//     }
    
};
