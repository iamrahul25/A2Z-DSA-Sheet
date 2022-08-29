class Solution {
public:
    
    //Method 2: Space O(1)----------------Optimised
    void rotate(vector<int>& nums, int k){
        
        int n = nums.size();
        
        //Important Condition.
        k = k%n;
        
        //Reverse 0 to n-k element
        reverse(nums.begin(), nums.begin()+n-k);
        
        //Reverse k to n element
        reverse(nums.end()-k, nums.end());
        
        //Reverse 0 to n element (Whole Array)
        reverse(nums.begin(), nums.end());
        
    }
    
    
    //Method 1: Space O(N)----------------
//     void rotate(vector<int>& nums, int k){
        
//         int n = nums.size();
        
//         k = k%n;
        
//         vector<int> vec(n);
        
//         for(int i=0; i<n; i++){
//             vec[i] = nums[(i+n-k)%n];
//         }
        
//         //Updating original Vector:
//         for(int i=0; i<n; i++){
//             nums[i] = vec[i];
//         }
//     }
    
};
