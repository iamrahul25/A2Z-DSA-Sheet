class Solution
{
public:
    
    
    //--------Method 1: Without using --> max() function.---------------
    int largest(vector<int> &arr, int n)
    {
        int maxx = arr[0]; //or INT_MIN;
        
        for(int i=0; i<n; i++){
            if(maxx<arr[i]){
                maxx = arr[i];
            }
        }
        
        return maxx;
    }

    

    //---------Method 2: Most common way --> using max() function-------
    int largest(vector<int> &arr, int n)
    // {
    //     int maxx = arr[0]; //or INT_MIN;
        
    //     for(int i=0; i<n; i++){
    //         maxx = max(arr[i], maxx);
    //     }
        
    //     return maxx;
    // }
    
    
    
    
    //---------Method 3: Using C++ Built-in STL Function.-----------------
    // int largest(vector<int> &arr, int n){
    //     return *max_element(arr.begin(), arr.end());
    // }
    
    
    
};
