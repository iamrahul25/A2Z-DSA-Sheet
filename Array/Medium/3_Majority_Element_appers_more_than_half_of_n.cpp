class Solution {
public:
    
    //Approach 3: Time: O(N)  Space: O(1) :=> Moore Voting Algorithm. 
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate;

        for(int i=0; i<nums.size(); i++){
            if(count==0){
                candidate = nums[i];
            }

            if(candidate==nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
        
        return candidate;
    }
    
    
    //Approach 2: Using Hashing and Counting. (One Pass)  Time: O(N)  Space: O(N)
    
//     int majorityElement(vector<int>&nums){
//         int n = nums.size();
        
//         unordered_map<int,int> mpp;
        
//         for(int i=0; i<n; i++){
//             mpp[nums[i]]++;
            
//             if(mpp[nums[i]]>n/2){
//                 return nums[i];
//             }
//         }
        
//         return -1;
//     }
    
    
    
    //Approach 1: Sorting and Returning N/2 th Element  Time: O(NlogN)  Space: O(1)
//     int majorityElement(vector<int>&nums){
        
//         sort(nums.begin(), nums.end());
        
//         int n = nums.size();
//         return nums[n/2];
//     }
    
};
