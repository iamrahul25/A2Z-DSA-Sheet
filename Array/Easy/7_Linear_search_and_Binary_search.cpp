class Solution{
    public:
    // Function to find element in sorted array
    
    //Approach 2: Binary Seach
    int searchSorted(int arr[], int N, int K){
        
        int low = 0;
        int high = N-1;
        
        int mid;
        
        while(low<high){
            
            mid = (low+high)/2;
            
            if(arr[mid]==K) return 1;
            
            if(arr[mid]>K){
                high = mid+1;
            }
            
            else{
                low = mid-1;
            }
        }
        
        return -1;
    }
    
    
    
    //Approach 1: Linear Search
    int searchInSorted(int arr[], int N, int K) 
    { 
        for(int i=0; i<N; i++){
            if(arr[i]==K){
                return 1;
            }
        }
        
        return -1;
       
    }
};
