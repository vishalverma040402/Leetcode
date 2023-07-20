class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>Ans;
        int n=nums.size();
        int ans[2*n];
        for(int i=0;i<(2*n);i++){
            if(i<n){
            ans[i]=nums[i];
            }
            else if((i>=n)||i<(n-1)){
                ans[i]=nums[i%n];
            }
            else{
                ans[i]=nums[n-1];
            }
    Ans.push_back(ans[i]);
        }
    return Ans;
    }

};