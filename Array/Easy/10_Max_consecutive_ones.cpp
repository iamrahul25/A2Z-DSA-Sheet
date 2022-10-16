class Solution {
public:
    
    //Time Complexity: O(N)  and  Space: O(1)
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int n = nums.size();
        
        int count = 0;
        int maxx = 0;
        
        for(int i=0; i<n; i++){
            if(nums[i]==1){
                count++;
            }
            else{
                maxx = max(maxx, count);
                count = 0;
            }
        }
        
        //For Last count
        maxx = max(maxx, count);
        
        return maxx;
    }
};
