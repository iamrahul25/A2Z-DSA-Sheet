class Solution {
public:
  
    //Two Pointer Approach   Time: O(N)  Space: O(1)
    int subarraySum(vector<int>& arr, int target) {
        int sum = 0;

        //P1 and P2 Pointer
        int i = 0;
        int j = 0;
        
        int count = 0;
        int n = arr.size();

        while(i<n and j<n){
            
            if(sum + arr[i]<target){
                sum = sum + arr[i];
                i++;
            }

            else if(sum+arr[i]==target){
                sum = sum + arr[i];
                i++;
                count++;
            }

            else if(sum + arr[i]>target){
                sum = sum - arr[j];
                j++;
            }
        }
        
        return count;
    }
};
