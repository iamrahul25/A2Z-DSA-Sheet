class Solution {
public:
    
    //Time: N(logN) Space: O(1)   => O(I) only to store Intervals
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        //Sorting
        sort(intervals.begin(), intervals.end());
        
        vector<vector<int>> ans;
        ans.push_back(intervals[0]);
        
        for(int i=1; i<intervals.size(); i++){
            
            if(intervals[i][0] <= ans[ans.size()-1][1]){
                
                ans[ans.size()-1][1] = max(intervals[i][1], ans[ans.size()-1][1]);
            }
            
            else{
                ans.push_back(intervals[i]);
            }
        }
        
        return ans;
    }
};
