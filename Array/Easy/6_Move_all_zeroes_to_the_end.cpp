class Solution {
public:
    //------Approach 3:  Time: O(N)  Space: O(1)---------------
    void moveZeroes(vector<int>& nums) {
        
        int n = nums.size();
        int lastzero = 0;
        
        for(int i=0; i<n; i++){
            if(nums[i]!=0){
                swap(nums[lastzero], nums[i]);
                lastzero++;
            }
        }
    }
    
    //Approach 2: Time: O(N)  Space: O(N)
//     void moveZeroes(vector<int> &nums){
        
//         int n = nums.size();
        
//         vector<int> vec(n,0);
        
//         int index = 0;
        
//         for(int i=0; i<n; i++){
//             if(nums[i]!=0){
//                 vec[index] = nums[i];
//                 index++;
//             }
//         }
        
//         //Copying into Original Array.
//         for(int i=0; i<n; i++){
//             nums[i] = vec[i];
//         }
//     }
    
    
    //-------Approach 1: Brute Force =>  Time: O(N^2)  Space: O(1)------------
//     void moveZeroes(vector<int>& nums) {
        
//         int n = nums.size();
        
//         for(int i=0; i<n; i++){
//             for(int j=i; j<n; j++){
//                 if(nums[i]==0 and nums[j]!=0){
//                     swap(nums[i],nums[j]);
//                 }
//             }
//         }
        
//     }
    
};
