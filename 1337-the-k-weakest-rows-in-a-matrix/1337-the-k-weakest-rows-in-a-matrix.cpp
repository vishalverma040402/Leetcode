class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>ans;
        vector<int> index;
       
        for(int i=0;i<mat.size();i++){
            int count=0;
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
            ans.push_back({count,i});
        }
              
            sort(ans.begin(),ans.end());
        for(int i=0;i<k;i++){
            index.push_back(ans[i].second);
        }
             
        
        return index;
        
    }
};