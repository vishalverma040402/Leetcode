class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum=0;
        vector<int>index;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                if(sum==target&&(i!=j)){
                    index.push_back(i);
                    index.push_back(j);\
                        break;
                }
                else{
                    sum=nums[i];
                    continue;
                }
            }
        }
        return index;
    }
};