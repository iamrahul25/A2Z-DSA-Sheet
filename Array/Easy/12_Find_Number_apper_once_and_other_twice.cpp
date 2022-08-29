class Solution {
public:
  
    //Approach 1: Using Bit Manipulation 
    int singleNumber(vector<int>& nums) {
        int xorr = 0;
        
        for(int i=0; i<nums.size(); i++){
            xorr = xorr ^ nums[i];
        }
        
        return xorr;
    }
  
    //Approach 2: Brute Force - Using HashMap => Count frequency of all element and check whose (frequency == 1), Return that element.
  
};
