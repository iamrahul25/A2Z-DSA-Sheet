class Solution {
public:
    
    //Method 3: Using Unordered Map (For Contant Time Access)   Time: O(N)  Space: O(N)--------
    //Two Pass --> Way ==> Two Loops are used. We can do it in a single pass also. 
    
    vector<int> twoSum(vector<int>& nums, int target){

        unordered_map<int,int> mpp;

        for(int i=0; i<nums.size(); i++){
            mpp.insert({nums[i],i});
        }

        for(int i=0; i<nums.size(); i++){
            int n = target - nums[i];

            if(mpp.find(n)!=mpp.end() and mpp[n]!=i){
                return {i,mpp[n]};
            }

        }

        return {-1,-1};

    }
    
    
    //Method 2: Sorting + Two Pointer Approach  Time: O(N logN)  Space: O(N)--------------------------
    
//     vector<int> twoSum(vector<int>& nums, int target){
        
//         int n = nums.size();
//         vector<pair<int,int>> vec(n);
        
//         for(int i=0; i<n; i++){
//             vec[i] = {nums[i], i};
//         }
        
//         //Sorting
//         sort(vec.begin(), vec.end());
        
//         int p1 = 0;
//         int p2 = n-1;
        
//         while(p1<p2){
            
//             if(vec[p1].first + vec[p2].first == target){
//                 return {vec[p1].second, vec[p2].second};
//             }
//             else if(vec[p1].first + vec[p2].first > target){
//                 p2--;
//             }
//             else{
//                 p1++;
//             }
//         }
        
        
//         //Not Found
//         return {-1,-1};
        
//     }
    
    
    
    //Method 1: Brute Force  Time Complexity: O(N^2)   Space: O(1)---------------------------
    
//     vector<int> twoSum(vector<int>& nums, int target) {
    
//         int n = nums.size();
        
//         vector<int> ans;

//         for(int i=0; i<n; i++){
//             for(int j=i+1; j<n; j++){
//                 if(nums[i]+nums[j]==target){
//                     ans.push_back(i);
//                     ans.push_back(j);
//                 }
//             }
//         }
        
        
//         return ans;
        
//     }
    
};
