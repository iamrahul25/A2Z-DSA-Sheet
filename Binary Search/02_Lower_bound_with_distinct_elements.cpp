class Solution{
  public:
    //Implement => Lower Bound - with distinct elements. Time: O(logN)
    int findFloor(vector<long long> v, long long n, long long x){
        
        long long low = 0;
        long long high = n-1;
        long long mid = -1;
        
        //If x greater than last element. 
        if(x>v[n-1]){
            return n-1;
        }
        
        while(low<=high){
            mid = (low+high)/2;
            
            if(v[mid]==x){
                return mid;
            }
            else if(v[mid]<x){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        
        return mid-1;
    }
};
