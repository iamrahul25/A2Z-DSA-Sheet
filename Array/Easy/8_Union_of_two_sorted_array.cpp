class Solution{
    public:
    
    //Approach 1: (Easy)  Using Set  Time: O(N+M)  Space: O(N+M)
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        set<int> st;
        
        for(int i=0; i<n; i++){
            st.insert(arr1[i]);
        }
        
        for(int i=0; i<m; i++){
            st.insert(arr2[i]);
        }
        
        vector<int> ans(st.begin(), st.end());
        
        return ans;
    }
};
