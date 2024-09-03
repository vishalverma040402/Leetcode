class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n=nums.size()/2;
        int count2=0;
        for(int i=0;i<nums.size();i++){
            int count1=0;
            for(int j=i;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count1++;
                }
            }
            
            if(count1 % 2==0){
                count2++;
            }
        }
        if(count2!=n){
            return false;
        
        
        }
        return true;
    }
};