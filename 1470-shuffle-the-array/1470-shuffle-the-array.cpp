class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>Ans;
       for(int i=0;i<n;i++){
                     Ans.push_back(nums[i]);
                   Ans.push_back(nums[i+n]);
       }
        return Ans;
    }
};