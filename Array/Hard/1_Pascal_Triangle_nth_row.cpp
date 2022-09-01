class Solution {
public:
    
    //Time: O(Row)   Space: O(Rows) (Best)
    vector<int> getRow(int rowIndex) {
        
        vector<int> ans(rowIndex+1);
        
        long long value = 1;
        int n = 1;
        
        for(int i = rowIndex; i>=0; i--){

            ans[n-1] = (value);
            
            value = (value*i)/n;
            n++;
        }
        
        return ans;
    }
};
