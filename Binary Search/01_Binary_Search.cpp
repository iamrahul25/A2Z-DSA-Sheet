class Solution {
public:
    
    //Approach 2: Own Binary Search Implementation.
    int search(vector<int> &nums, int target){
        int low = 0;
        int high = nums.size() - 1;
        int mid;
        
        while(low<=high){
            mid = (low+high)/2;
            
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        
        return -1;
    }
    
    
    //Approach 1: Using STL Built-In Binary Search function
    int search(vector<int>& nums, int target) {
        
        if(binary_search(nums.begin(), nums.end(), target)){
            return lower_bound(nums.begin(),nums.end(), target) - nums.begin();
        }
        
        return -1;
    }
};
