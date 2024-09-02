class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int> ones;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                continue;
            }
           else{
               ones.push_back(count);
               count=0;
           }
        }
        ones.push_back(count);
        int result = *max_element(ones.begin(),ones.end());
        return result;
    }
};