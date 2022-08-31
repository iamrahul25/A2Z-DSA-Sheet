class Solution {
public:
    
    //Approach 3: Using Hashing or Counting Sort   Time: O(N)  Space: O(1)
    void sortColors(vector<int>& nums) {
        
        vector<int> hash = {0,0,0};
        
        for(int i=0; i<nums.size(); i++){
            hash[nums[i]]++;
        }
        
        
        //It seems it takes O(N^2) but actually it takes only O(N) Time. 
        int index = 0;
        for(int i=0; i<3; i++){
            for(int j=0; j<hash[i]; j++){
                nums[index] = i;
                index++;
            }
        }
        
    }
    
    //Approach 2: Using Swapping
//     void sortColors(vector<int>& nums){
//         int n = nums.size();
//         int j = 0, k = n-1;
        
//         for (int i=0; i <= k; i++) {
//             if (nums[i] == 0)
//                 swap(nums[i], nums[j++]);
//             else if (nums[i] == 2)
//                 swap(nums[i--], nums[k--]);
//         }
//     }
    
    
    
    //Approach 1: Using Built-in Sorting Function  Time: O(NlogN) Space: O(1)
    // void sortColors(vector<int>& nums) {
    //     sort(nums.begin(), nums.end());
    // }
    
};
