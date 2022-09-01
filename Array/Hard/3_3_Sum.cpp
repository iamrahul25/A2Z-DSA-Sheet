class Solution {
public:
    
    //Approach 3: Sotring + 2 Pointer => Without using Set to store unique Triplet:   Time: O(N^2) Space: O(1)
    //Solve => Striver Video
    
    
    
    //Approach 2: Sorting + 2 Pointer Approach  Time: O(N^2 logN) Space: O(K) No. of Triplet
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        set<vector<int>> st;
        
        for(int i=0; i<n; i++){
            
            int low = i+1;
            int high = n-1;
            
            while(low<high){
                
                if(nums[i] + nums[low] + nums[high] == 0){
                    vector<int> v = {nums[i], nums[low], nums[high]};
                    sort(v.begin(), v.end());
                    st.insert(v);
                    
                    low++;
                }
                
                else if(nums[i] + nums[low] + nums[high] > 0){
                    high--;
                }
                
                else{
                    low++;
                }
                
            }
        }
        
        //Converting Set of Vector to Vector of Vector.
        vector<vector<int>> ans(st.begin(), st.end());
        
        return ans;
    }
    
    
    
    //Approach 1: Brute Force: Time: O(N^3)  Space: O(P) --> TLE Error (308/311 Test case Passed)
    
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int n = nums.size();
        
//         set<vector<int>> st;
        
//         for(int i=0; i<=n-3; i++){
//             for(int j=i+1; j<=n-2; j++){
//                 for(int k=j+1; k<=n-1; k++){
//                     if(nums[i]+nums[j]+nums[k]==0){
//                         vector<int> v = {nums[i], nums[j], nums[k]};
//                         sort(v.begin(), v.end());
//                         st.insert(v);
//                     }
//                 }
//             }
//         }
        
//         vector<vector<int>> ans(st.begin(), st.end());
        
//         return ans;
//     }
    
};
